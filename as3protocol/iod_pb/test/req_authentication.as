package iod_pb.test {
	import com.netease.protobuf.*;
	use namespace com.netease.protobuf.used_by_generated_code;
	import com.netease.protobuf.fieldDescriptors.*;
	import flash.utils.Endian;
	import flash.utils.IDataInput;
	import flash.utils.IDataOutput;
	import flash.utils.IExternalizable;
	import flash.errors.IOError;
	// @@protoc_insertion_point(imports)

	// @@protoc_insertion_point(class_metadata)
	public dynamic final class req_authentication extends com.netease.protobuf.Message {
		/**
		 *  @private
		 */
		public static const USERID:FieldDescriptor_TYPE_STRING = new FieldDescriptor_TYPE_STRING("iod_pb.test.req_authentication.userid", "userid", (1 << 3) | com.netease.protobuf.WireType.LENGTH_DELIMITED);

		private var userid$field:String;

		public function clearUserid():void {
			userid$field = null;
		}

		public function get hasUserid():Boolean {
			return userid$field != null;
		}

		public function set userid(value:String):void {
			userid$field = value;
		}

		public function get userid():String {
			return userid$field;
		}

		/**
		 *  @private
		 */
		public static const AUTHENTICATION:FieldDescriptor_TYPE_STRING = new FieldDescriptor_TYPE_STRING("iod_pb.test.req_authentication.authentication", "authentication", (2 << 3) | com.netease.protobuf.WireType.LENGTH_DELIMITED);

		private var authentication$field:String;

		public function clearAuthentication():void {
			authentication$field = null;
		}

		public function get hasAuthentication():Boolean {
			return authentication$field != null;
		}

		public function set authentication(value:String):void {
			authentication$field = value;
		}

		public function get authentication():String {
			return authentication$field;
		}

		/**
		 *  @private
		 */
		override com.netease.protobuf.used_by_generated_code final function writeToBuffer(output:com.netease.protobuf.WritingBuffer):void {
			if (hasUserid) {
				com.netease.protobuf.WriteUtils.writeTag(output, com.netease.protobuf.WireType.LENGTH_DELIMITED, 1);
				com.netease.protobuf.WriteUtils.write_TYPE_STRING(output, userid$field);
			}
			if (hasAuthentication) {
				com.netease.protobuf.WriteUtils.writeTag(output, com.netease.protobuf.WireType.LENGTH_DELIMITED, 2);
				com.netease.protobuf.WriteUtils.write_TYPE_STRING(output, authentication$field);
			}
			for (var fieldKey:* in this) {
				super.writeUnknown(output, fieldKey);
			}
		}

		/**
		 *  @private
		 */
		override com.netease.protobuf.used_by_generated_code final function readFromSlice(input:flash.utils.IDataInput, bytesAfterSlice:uint):void {
			var userid$count:uint = 0;
			var authentication$count:uint = 0;
			while (input.bytesAvailable > bytesAfterSlice) {
				var tag:uint = com.netease.protobuf.ReadUtils.read_TYPE_UINT32(input);
				switch (tag >> 3) {
				case 1:
					if (userid$count != 0) {
						throw new flash.errors.IOError('Bad data format: req_authentication.userid cannot be set twice.');
					}
					++userid$count;
					this.userid = com.netease.protobuf.ReadUtils.read_TYPE_STRING(input);
					break;
				case 2:
					if (authentication$count != 0) {
						throw new flash.errors.IOError('Bad data format: req_authentication.authentication cannot be set twice.');
					}
					++authentication$count;
					this.authentication = com.netease.protobuf.ReadUtils.read_TYPE_STRING(input);
					break;
				default:
					super.readUnknown(input, tag);
					break;
				}
			}
		}

	}
}