#pragma once

#include "iod_common.h"
#include "iod_packet.h"
#include "iod_session.h"
#include "iod_session_creator.h"

#define DEFAULT_CONNECTION_HIGHMARK 1048576u

#ifdef WIN32
#define iod_net_last_errno WSAGetLastError()
#else
#define iod_net_last_errno errno
#endif

namespace iod_network {

enum 
{
	CONNECTION_CLOSE_BY_LOCAL = 0,
	CONNECTION_CLOSE_BY_REMOTE = 1,
	CONNECTION_CLOSE_BY_TIMEOUT = 2,
	CONNECTION_CLOSE_BY_NETERROR = 3,
};

extern struct event_base *evbase;

//初始化
bool initialize();

//更新
inline int update() {
	event_base_loop(evbase, EVLOOP_ONCE | EVLOOP_NONBLOCK);
	return 0;
}

//销毁
inline void shutdown() {
	if(evbase)	event_base_free(evbase);
}

//开启监听
struct listener_info* start_listener(iod_session_creator* session_creator, //对话创建器
	const char* bind_addr,  //监听地址，格式为 hostname:port
	int conn_timeout_secs = 120,		//每个连接的超时时间：超过该时间没有收到数据则关闭连接
	int conn_highmark = DEFAULT_CONNECTION_HIGHMARK		//缓冲区上限：如果缓冲区中超过highmark字节未处理，则不再接收数据。0为不限制
	);

//连接远程地址
struct connection_info* start_connection(iod_session* session,	//处理消息的对话实例
	const char* target_addr,  //目标地址，格式为 hostname:port
	int conn_timeout_secs = 120,		//每个连接的超时时间：超过该时间没有收到数据则关闭连接
	int conn_highmark = DEFAULT_CONNECTION_HIGHMARK		//缓冲区上限：如果缓冲区中超过highmark字节未处理，则不再接收数据。0为不限制
	);

//关闭监听
inline void shutdown_listener(struct listener_info* l_info) {
	delete l_info;
}

//关闭/销毁连接
inline void destroy_connection(struct connection_info* conn_info, int reason) {
	if (conn_info->session)
		conn_info->session->on_closed(reason);
	delete conn_info;
}

//新连接回调
void new_connection_cb(struct evconnlistener *, evutil_socket_t, struct sockaddr *, int socklen, void *);

//读取数据回调
void conn_readcb(struct bufferevent *bev, void *user_data);

//写数据回调
void conn_writecb(struct bufferevent *bev, void *user_data);

//网络事件回调
void conn_eventcb(struct bufferevent *bev, short events, void *user_data);

//处理网络数据（已建立会话）
int process_session_data(iod_session* session, struct bufferevent *bev);

//处理网络数据（未建立会话）
int process_none_session_data(iod_session_creator* session_creator, connection_info* conn_info);
}

//绑定网络连接和会话
inline void bind_connection_session(struct connection_info* conn_info, iod_session* session) {
	session->conn_info = conn_info;
	conn_info->session = session;
}
