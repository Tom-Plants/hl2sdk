// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dota_commonmessages.proto

#ifndef PROTOBUF_dota_5fcommonmessages_2eproto__INCLUDED
#define PROTOBUF_dota_5fcommonmessages_2eproto__INCLUDED

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
#include "google/protobuf/descriptor.pb.h"
#include "netmessages.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();

class CDOTAMsg_LocationPing;
class CDOTAMsg_ItemAlert;
class CDOTAMsg_MapLine;
class CDOTAMsg_WorldLine;

enum EDOTAChatWheelMessage {
  k_EDOTA_CW_Ok = 0,
  k_EDOTA_CW_Care = 1,
  k_EDOTA_CW_GetBack = 2,
  k_EDOTA_CW_NeedWards = 3,
  k_EDOTA_CW_Stun = 4,
  k_EDOTA_CW_Help = 5,
  k_EDOTA_CW_Push = 6,
  k_EDOTA_CW_GoodJob = 7,
  k_EDOTA_CW_Missing = 8,
  k_EDOTA_CW_Missing_Top = 9,
  k_EDOTA_CW_Missing_Mid = 10,
  k_EDOTA_CW_Missing_Bottom = 11
};
bool EDOTAChatWheelMessage_IsValid(int value);
const EDOTAChatWheelMessage EDOTAChatWheelMessage_MIN = k_EDOTA_CW_Ok;
const EDOTAChatWheelMessage EDOTAChatWheelMessage_MAX = k_EDOTA_CW_Missing_Bottom;
const int EDOTAChatWheelMessage_ARRAYSIZE = EDOTAChatWheelMessage_MAX + 1;

const ::google::protobuf::EnumDescriptor* EDOTAChatWheelMessage_descriptor();
inline const ::std::string& EDOTAChatWheelMessage_Name(EDOTAChatWheelMessage value) {
  return ::google::protobuf::internal::NameOfEnum(
    EDOTAChatWheelMessage_descriptor(), value);
}
inline bool EDOTAChatWheelMessage_Parse(
    const ::std::string& name, EDOTAChatWheelMessage* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EDOTAChatWheelMessage>(
    EDOTAChatWheelMessage_descriptor(), name, value);
}
// ===================================================================

class CDOTAMsg_LocationPing : public ::google::protobuf::Message {
 public:
  CDOTAMsg_LocationPing();
  virtual ~CDOTAMsg_LocationPing();
  
  CDOTAMsg_LocationPing(const CDOTAMsg_LocationPing& from);
  
  inline CDOTAMsg_LocationPing& operator=(const CDOTAMsg_LocationPing& from) {
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
  static const CDOTAMsg_LocationPing& default_instance();
  
  void Swap(CDOTAMsg_LocationPing* other);
  
  // implements Message ----------------------------------------------
  
  CDOTAMsg_LocationPing* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_LocationPing& from);
  void MergeFrom(const CDOTAMsg_LocationPing& from);
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
  
  // optional int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // optional int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // optional int32 target = 3;
  inline bool has_target() const;
  inline void clear_target();
  static const int kTargetFieldNumber = 3;
  inline ::google::protobuf::int32 target() const;
  inline void set_target(::google::protobuf::int32 value);
  
  // optional bool direct_ping = 4;
  inline bool has_direct_ping() const;
  inline void clear_direct_ping();
  static const int kDirectPingFieldNumber = 4;
  inline bool direct_ping() const;
  inline void set_direct_ping(bool value);
  
  // @@protoc_insertion_point(class_scope:CDOTAMsg_LocationPing)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_target();
  inline void clear_has_target();
  inline void set_has_direct_ping();
  inline void clear_has_direct_ping();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 target_;
  bool direct_ping_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();
  
  void InitAsDefaultInstance();
  static CDOTAMsg_LocationPing* default_instance_;
};
// -------------------------------------------------------------------

class CDOTAMsg_ItemAlert : public ::google::protobuf::Message {
 public:
  CDOTAMsg_ItemAlert();
  virtual ~CDOTAMsg_ItemAlert();
  
  CDOTAMsg_ItemAlert(const CDOTAMsg_ItemAlert& from);
  
  inline CDOTAMsg_ItemAlert& operator=(const CDOTAMsg_ItemAlert& from) {
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
  static const CDOTAMsg_ItemAlert& default_instance();
  
  void Swap(CDOTAMsg_ItemAlert* other);
  
  // implements Message ----------------------------------------------
  
  CDOTAMsg_ItemAlert* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_ItemAlert& from);
  void MergeFrom(const CDOTAMsg_ItemAlert& from);
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
  
  // optional int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // optional int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // optional int32 itemid = 3;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemidFieldNumber = 3;
  inline ::google::protobuf::int32 itemid() const;
  inline void set_itemid(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:CDOTAMsg_ItemAlert)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_itemid();
  inline void clear_has_itemid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 itemid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();
  
  void InitAsDefaultInstance();
  static CDOTAMsg_ItemAlert* default_instance_;
};
// -------------------------------------------------------------------

class CDOTAMsg_MapLine : public ::google::protobuf::Message {
 public:
  CDOTAMsg_MapLine();
  virtual ~CDOTAMsg_MapLine();
  
  CDOTAMsg_MapLine(const CDOTAMsg_MapLine& from);
  
  inline CDOTAMsg_MapLine& operator=(const CDOTAMsg_MapLine& from) {
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
  static const CDOTAMsg_MapLine& default_instance();
  
  void Swap(CDOTAMsg_MapLine* other);
  
  // implements Message ----------------------------------------------
  
  CDOTAMsg_MapLine* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_MapLine& from);
  void MergeFrom(const CDOTAMsg_MapLine& from);
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
  
  // optional int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // optional int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // optional bool initial = 3;
  inline bool has_initial() const;
  inline void clear_initial();
  static const int kInitialFieldNumber = 3;
  inline bool initial() const;
  inline void set_initial(bool value);
  
  // @@protoc_insertion_point(class_scope:CDOTAMsg_MapLine)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_initial();
  inline void clear_has_initial();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  bool initial_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();
  
  void InitAsDefaultInstance();
  static CDOTAMsg_MapLine* default_instance_;
};
// -------------------------------------------------------------------

class CDOTAMsg_WorldLine : public ::google::protobuf::Message {
 public:
  CDOTAMsg_WorldLine();
  virtual ~CDOTAMsg_WorldLine();
  
  CDOTAMsg_WorldLine(const CDOTAMsg_WorldLine& from);
  
  inline CDOTAMsg_WorldLine& operator=(const CDOTAMsg_WorldLine& from) {
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
  static const CDOTAMsg_WorldLine& default_instance();
  
  void Swap(CDOTAMsg_WorldLine* other);
  
  // implements Message ----------------------------------------------
  
  CDOTAMsg_WorldLine* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_WorldLine& from);
  void MergeFrom(const CDOTAMsg_WorldLine& from);
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
  
  // optional int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // optional int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // optional int32 z = 3;
  inline bool has_z() const;
  inline void clear_z();
  static const int kZFieldNumber = 3;
  inline ::google::protobuf::int32 z() const;
  inline void set_z(::google::protobuf::int32 value);
  
  // optional bool initial = 4;
  inline bool has_initial() const;
  inline void clear_initial();
  static const int kInitialFieldNumber = 4;
  inline bool initial() const;
  inline void set_initial(bool value);
  
  // optional bool end = 5;
  inline bool has_end() const;
  inline void clear_end();
  static const int kEndFieldNumber = 5;
  inline bool end() const;
  inline void set_end(bool value);
  
  // @@protoc_insertion_point(class_scope:CDOTAMsg_WorldLine)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_z();
  inline void clear_has_z();
  inline void set_has_initial();
  inline void clear_has_initial();
  inline void set_has_end();
  inline void clear_has_end();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 z_;
  bool initial_;
  bool end_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();
  
  void InitAsDefaultInstance();
  static CDOTAMsg_WorldLine* default_instance_;
};
// ===================================================================


// ===================================================================

// CDOTAMsg_LocationPing

// optional int32 x = 1;
inline bool CDOTAMsg_LocationPing::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_LocationPing::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_LocationPing::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 CDOTAMsg_LocationPing::x() const {
  return x_;
}
inline void CDOTAMsg_LocationPing::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 2;
inline bool CDOTAMsg_LocationPing::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAMsg_LocationPing::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAMsg_LocationPing::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 CDOTAMsg_LocationPing::y() const {
  return y_;
}
inline void CDOTAMsg_LocationPing::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional int32 target = 3;
inline bool CDOTAMsg_LocationPing::has_target() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_target() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAMsg_LocationPing::clear_has_target() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAMsg_LocationPing::clear_target() {
  target_ = 0;
  clear_has_target();
}
inline ::google::protobuf::int32 CDOTAMsg_LocationPing::target() const {
  return target_;
}
inline void CDOTAMsg_LocationPing::set_target(::google::protobuf::int32 value) {
  set_has_target();
  target_ = value;
}

// optional bool direct_ping = 4;
inline bool CDOTAMsg_LocationPing::has_direct_ping() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_direct_ping() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CDOTAMsg_LocationPing::clear_has_direct_ping() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CDOTAMsg_LocationPing::clear_direct_ping() {
  direct_ping_ = false;
  clear_has_direct_ping();
}
inline bool CDOTAMsg_LocationPing::direct_ping() const {
  return direct_ping_;
}
inline void CDOTAMsg_LocationPing::set_direct_ping(bool value) {
  set_has_direct_ping();
  direct_ping_ = value;
}

// -------------------------------------------------------------------

// CDOTAMsg_ItemAlert

// optional int32 x = 1;
inline bool CDOTAMsg_ItemAlert::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_ItemAlert::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_ItemAlert::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_ItemAlert::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 CDOTAMsg_ItemAlert::x() const {
  return x_;
}
inline void CDOTAMsg_ItemAlert::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 2;
inline bool CDOTAMsg_ItemAlert::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAMsg_ItemAlert::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAMsg_ItemAlert::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAMsg_ItemAlert::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 CDOTAMsg_ItemAlert::y() const {
  return y_;
}
inline void CDOTAMsg_ItemAlert::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional int32 itemid = 3;
inline bool CDOTAMsg_ItemAlert::has_itemid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAMsg_ItemAlert::set_has_itemid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAMsg_ItemAlert::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAMsg_ItemAlert::clear_itemid() {
  itemid_ = 0;
  clear_has_itemid();
}
inline ::google::protobuf::int32 CDOTAMsg_ItemAlert::itemid() const {
  return itemid_;
}
inline void CDOTAMsg_ItemAlert::set_itemid(::google::protobuf::int32 value) {
  set_has_itemid();
  itemid_ = value;
}

// -------------------------------------------------------------------

// CDOTAMsg_MapLine

// optional int32 x = 1;
inline bool CDOTAMsg_MapLine::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_MapLine::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_MapLine::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_MapLine::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 CDOTAMsg_MapLine::x() const {
  return x_;
}
inline void CDOTAMsg_MapLine::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 2;
inline bool CDOTAMsg_MapLine::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAMsg_MapLine::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAMsg_MapLine::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAMsg_MapLine::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 CDOTAMsg_MapLine::y() const {
  return y_;
}
inline void CDOTAMsg_MapLine::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional bool initial = 3;
inline bool CDOTAMsg_MapLine::has_initial() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAMsg_MapLine::set_has_initial() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAMsg_MapLine::clear_has_initial() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAMsg_MapLine::clear_initial() {
  initial_ = false;
  clear_has_initial();
}
inline bool CDOTAMsg_MapLine::initial() const {
  return initial_;
}
inline void CDOTAMsg_MapLine::set_initial(bool value) {
  set_has_initial();
  initial_ = value;
}

// -------------------------------------------------------------------

// CDOTAMsg_WorldLine

// optional int32 x = 1;
inline bool CDOTAMsg_WorldLine::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_WorldLine::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_WorldLine::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 CDOTAMsg_WorldLine::x() const {
  return x_;
}
inline void CDOTAMsg_WorldLine::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 2;
inline bool CDOTAMsg_WorldLine::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAMsg_WorldLine::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAMsg_WorldLine::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 CDOTAMsg_WorldLine::y() const {
  return y_;
}
inline void CDOTAMsg_WorldLine::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional int32 z = 3;
inline bool CDOTAMsg_WorldLine::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAMsg_WorldLine::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAMsg_WorldLine::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline ::google::protobuf::int32 CDOTAMsg_WorldLine::z() const {
  return z_;
}
inline void CDOTAMsg_WorldLine::set_z(::google::protobuf::int32 value) {
  set_has_z();
  z_ = value;
}

// optional bool initial = 4;
inline bool CDOTAMsg_WorldLine::has_initial() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_initial() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CDOTAMsg_WorldLine::clear_has_initial() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CDOTAMsg_WorldLine::clear_initial() {
  initial_ = false;
  clear_has_initial();
}
inline bool CDOTAMsg_WorldLine::initial() const {
  return initial_;
}
inline void CDOTAMsg_WorldLine::set_initial(bool value) {
  set_has_initial();
  initial_ = value;
}

// optional bool end = 5;
inline bool CDOTAMsg_WorldLine::has_end() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_end() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CDOTAMsg_WorldLine::clear_has_end() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CDOTAMsg_WorldLine::clear_end() {
  end_ = false;
  clear_has_end();
}
inline bool CDOTAMsg_WorldLine::end() const {
  return end_;
}
inline void CDOTAMsg_WorldLine::set_end(bool value) {
  set_has_end();
  end_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< EDOTAChatWheelMessage>() {
  return EDOTAChatWheelMessage_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dota_5fcommonmessages_2eproto__INCLUDED
