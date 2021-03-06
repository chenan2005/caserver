#pragma once

#include "iod_session_manager_pb.h"

class Player;

class PlayerManager :
	public iod_session_manager_pb
{
	DEC_REG_PROTO_MSG_HANDLE(PlayerManager)

public:

	PlayerManager(void);

	virtual ~PlayerManager(void);

	void kickout(iod_session* session, int reason);

	void random_kick(int num);

	void check_sessions();

	inline unsigned int get_session_count() const { return (unsigned int)sessions.size(); }

	//---------------------------------------------------------------------
	//message handlers
	//---------------------------------------------------------------------

	virtual iod_session* onReqAuthentication(struct connection_info* conn_info, com::iod::pb::common::BaseMsg* msg);

	virtual iod_session* onReqLogin(struct connection_info* conn_info, com::iod::pb::common::BaseMsg* msg);

	//---------------------------------------------------------------------

	unsigned int create_session_count;

	unsigned int destroy_session_count;

	listener_info* l_info;

protected:

	bool validate_authentication(const std::string& userid, const std::string& authentication, std::string& authorization);

	bool validate_authorization(const std::string& userid, const std::string& authorization);

	std::map< std::string, Player* > sessions;
};
