// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/iod_common.proto

#ifndef PROTOBUF_common_2fiod_5fcommon_2eproto__INCLUDED
#define PROTOBUF_common_2fiod_5fcommon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace iod_pb {
namespace common {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_common_2fiod_5fcommon_2eproto();
void protobuf_AssignDesc_common_2fiod_5fcommon_2eproto();
void protobuf_ShutdownFile_common_2fiod_5fcommon_2eproto();

class base_msg;

// ===================================================================

class base_msg : public ::google::protobuf::Message {
 public:
  base_msg();
  virtual ~base_msg();
  
  base_msg(const base_msg& from);
  
  inline base_msg& operator=(const base_msg& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const base_msg& default_instance();
  
  void Swap(base_msg* other);
  
  // implements Message ----------------------------------------------
  
  base_msg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const base_msg& from);
  void MergeFrom(const base_msg& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional sint32 from = 1;
  inline bool has_from() const;
  inline void clear_from();
  static const int kFromFieldNumber = 1;
  inline ::google::protobuf::int32 from() const;
  inline void set_from(::google::protobuf::int32 value);
  
  // optional sint32 to = 2;
  inline bool has_to() const;
  inline void clear_to();
  static const int kToFieldNumber = 2;
  inline ::google::protobuf::int32 to() const;
  inline void set_to(::google::protobuf::int32 value);
  
  // optional sint32 flags = 3;
  inline bool has_flags() const;
  inline void clear_flags();
  static const int kFlagsFieldNumber = 3;
  inline ::google::protobuf::int32 flags() const;
  inline void set_flags(::google::protobuf::int32 value);
  
  // required sint32 messge_id = 4;
  inline bool has_messge_id() const;
  inline void clear_messge_id();
  static const int kMessgeIdFieldNumber = 4;
  inline ::google::protobuf::int32 messge_id() const;
  inline void set_messge_id(::google::protobuf::int32 value);
  
  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(base_msg)
  // @@protoc_insertion_point(class_scope:iod_pb.common.base_msg)
 private:
  inline void set_has_from();
  inline void clear_has_from();
  inline void set_has_to();
  inline void clear_has_to();
  inline void set_has_flags();
  inline void clear_has_flags();
  inline void set_has_messge_id();
  inline void clear_has_messge_id();
  
  ::google::protobuf::internal::ExtensionSet _extensions_;
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 from_;
  ::google::protobuf::int32 to_;
  ::google::protobuf::int32 flags_;
  ::google::protobuf::int32 messge_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_common_2fiod_5fcommon_2eproto();
  friend void protobuf_AssignDesc_common_2fiod_5fcommon_2eproto();
  friend void protobuf_ShutdownFile_common_2fiod_5fcommon_2eproto();
  
  void InitAsDefaultInstance();
  static base_msg* default_instance_;
};
// ===================================================================


// ===================================================================

// base_msg

// optional sint32 from = 1;
inline bool base_msg::has_from() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void base_msg::set_has_from() {
  _has_bits_[0] |= 0x00000001u;
}
inline void base_msg::clear_has_from() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void base_msg::clear_from() {
  from_ = 0;
  clear_has_from();
}
inline ::google::protobuf::int32 base_msg::from() const {
  return from_;
}
inline void base_msg::set_from(::google::protobuf::int32 value) {
  set_has_from();
  from_ = value;
}

// optional sint32 to = 2;
inline bool base_msg::has_to() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void base_msg::set_has_to() {
  _has_bits_[0] |= 0x00000002u;
}
inline void base_msg::clear_has_to() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void base_msg::clear_to() {
  to_ = 0;
  clear_has_to();
}
inline ::google::protobuf::int32 base_msg::to() const {
  return to_;
}
inline void base_msg::set_to(::google::protobuf::int32 value) {
  set_has_to();
  to_ = value;
}

// optional sint32 flags = 3;
inline bool base_msg::has_flags() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void base_msg::set_has_flags() {
  _has_bits_[0] |= 0x00000004u;
}
inline void base_msg::clear_has_flags() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void base_msg::clear_flags() {
  flags_ = 0;
  clear_has_flags();
}
inline ::google::protobuf::int32 base_msg::flags() const {
  return flags_;
}
inline void base_msg::set_flags(::google::protobuf::int32 value) {
  set_has_flags();
  flags_ = value;
}

// required sint32 messge_id = 4;
inline bool base_msg::has_messge_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void base_msg::set_has_messge_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void base_msg::clear_has_messge_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void base_msg::clear_messge_id() {
  messge_id_ = 0;
  clear_has_messge_id();
}
inline ::google::protobuf::int32 base_msg::messge_id() const {
  return messge_id_;
}
inline void base_msg::set_messge_id(::google::protobuf::int32 value) {
  set_has_messge_id();
  messge_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace iod_pb

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_common_2fiod_5fcommon_2eproto__INCLUDED
