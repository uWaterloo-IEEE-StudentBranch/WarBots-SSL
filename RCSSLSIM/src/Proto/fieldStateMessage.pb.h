// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fieldStateMessage.proto

#ifndef PROTOBUF_fieldStateMessage_2eproto__INCLUDED
#define PROTOBUF_fieldStateMessage_2eproto__INCLUDED

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
#include "robot.pb.h"
#include "ball.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_fieldStateMessage_2eproto();
void protobuf_AssignDesc_fieldStateMessage_2eproto();
void protobuf_ShutdownFile_fieldStateMessage_2eproto();

class FieldStateMessage;

// ===================================================================

class FieldStateMessage : public ::google::protobuf::Message {
 public:
  FieldStateMessage();
  virtual ~FieldStateMessage();
  
  FieldStateMessage(const FieldStateMessage& from);
  
  inline FieldStateMessage& operator=(const FieldStateMessage& from) {
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
  static const FieldStateMessage& default_instance();
  
  void Swap(FieldStateMessage* other);
  
  // implements Message ----------------------------------------------
  
  FieldStateMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FieldStateMessage& from);
  void MergeFrom(const FieldStateMessage& from);
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
  
  // repeated .Robot robot = 1;
  inline int robot_size() const;
  inline void clear_robot();
  static const int kRobotFieldNumber = 1;
  inline const ::Robot& robot(int index) const;
  inline ::Robot* mutable_robot(int index);
  inline ::Robot* add_robot();
  inline const ::google::protobuf::RepeatedPtrField< ::Robot >&
      robot() const;
  inline ::google::protobuf::RepeatedPtrField< ::Robot >*
      mutable_robot();
  
  // repeated .Ball ball = 2;
  inline int ball_size() const;
  inline void clear_ball();
  static const int kBallFieldNumber = 2;
  inline const ::Ball& ball(int index) const;
  inline ::Ball* mutable_ball(int index);
  inline ::Ball* add_ball();
  inline const ::google::protobuf::RepeatedPtrField< ::Ball >&
      ball() const;
  inline ::google::protobuf::RepeatedPtrField< ::Ball >*
      mutable_ball();
  
  // @@protoc_insertion_point(class_scope:FieldStateMessage)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::Robot > robot_;
  ::google::protobuf::RepeatedPtrField< ::Ball > ball_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_fieldStateMessage_2eproto();
  friend void protobuf_AssignDesc_fieldStateMessage_2eproto();
  friend void protobuf_ShutdownFile_fieldStateMessage_2eproto();
  
  void InitAsDefaultInstance();
  static FieldStateMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// FieldStateMessage

// repeated .Robot robot = 1;
inline int FieldStateMessage::robot_size() const {
  return robot_.size();
}
inline void FieldStateMessage::clear_robot() {
  robot_.Clear();
}
inline const ::Robot& FieldStateMessage::robot(int index) const {
  return robot_.Get(index);
}
inline ::Robot* FieldStateMessage::mutable_robot(int index) {
  return robot_.Mutable(index);
}
inline ::Robot* FieldStateMessage::add_robot() {
  return robot_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Robot >&
FieldStateMessage::robot() const {
  return robot_;
}
inline ::google::protobuf::RepeatedPtrField< ::Robot >*
FieldStateMessage::mutable_robot() {
  return &robot_;
}

// repeated .Ball ball = 2;
inline int FieldStateMessage::ball_size() const {
  return ball_.size();
}
inline void FieldStateMessage::clear_ball() {
  ball_.Clear();
}
inline const ::Ball& FieldStateMessage::ball(int index) const {
  return ball_.Get(index);
}
inline ::Ball* FieldStateMessage::mutable_ball(int index) {
  return ball_.Mutable(index);
}
inline ::Ball* FieldStateMessage::add_ball() {
  return ball_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Ball >&
FieldStateMessage::ball() const {
  return ball_;
}
inline ::google::protobuf::RepeatedPtrField< ::Ball >*
FieldStateMessage::mutable_ball() {
  return &ball_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_fieldStateMessage_2eproto__INCLUDED
