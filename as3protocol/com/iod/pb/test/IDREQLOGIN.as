package com.iod.pb.test {
	import com.netease.protobuf.*;
	import com.netease.protobuf.fieldDescriptors.*;
	import com.iod.pb.test.ReqLogin;
	import com.iod.pb.common.BaseMsg;
	// @@protoc_insertion_point(imports)

	// @@protoc_insertion_point(constant_metadata)
	/**
	 *  @private
	 */
	public const IDREQLOGIN:FieldDescriptor_TYPE_MESSAGE = new FieldDescriptor_TYPE_MESSAGE("com.iod.pb.test.idReqLogin", "com.iod.pb.test.IDREQLOGIN", (1002 << 3) | com.netease.protobuf.WireType.LENGTH_DELIMITED, com.iod.pb.test.ReqLogin);

	com.iod.pb.common.BaseMsg.extensionReadFunctions[(1002 << 3) | com.netease.protobuf.WireType.LENGTH_DELIMITED] = IDREQLOGIN.read;

}
