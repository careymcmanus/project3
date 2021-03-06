// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: collision_map_request.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "collision_map_request.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace collision_map_creator_msgs {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* CollisionMapRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CollisionMapRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_collision_5fmap_5frequest_2eproto() {
  protobuf_AddDesc_collision_5fmap_5frequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "collision_map_request.proto");
  GOOGLE_CHECK(file != NULL);
  CollisionMapRequest_descriptor_ = file->message_type(0);
  static const int CollisionMapRequest_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, upperleft_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, upperright_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, lowerright_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, lowerleft_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, height_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, resolution_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, filename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, threshold_),
  };
  CollisionMapRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CollisionMapRequest_descriptor_,
      CollisionMapRequest::default_instance_,
      CollisionMapRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CollisionMapRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CollisionMapRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_collision_5fmap_5frequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CollisionMapRequest_descriptor_, &CollisionMapRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_collision_5fmap_5frequest_2eproto() {
  delete CollisionMapRequest::default_instance_;
  delete CollisionMapRequest_reflection_;
}

void protobuf_AddDesc_collision_5fmap_5frequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector2d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033collision_map_request.proto\022\037collision"
    "_map_creator_msgs.msgs\032\016vector2d.proto\"\217"
    "\002\n\023CollisionMapRequest\022(\n\tupperLeft\030\001 \002("
    "\0132\025.gazebo.msgs.Vector2d\022)\n\nupperRight\030\002"
    " \002(\0132\025.gazebo.msgs.Vector2d\022)\n\nlowerRigh"
    "t\030\003 \002(\0132\025.gazebo.msgs.Vector2d\022(\n\tlowerL"
    "eft\030\004 \002(\0132\025.gazebo.msgs.Vector2d\022\016\n\006heig"
    "ht\030\005 \002(\001\022\022\n\nresolution\030\006 \002(\001\022\022\n\010filename"
    "\030\007 \001(\t:\000\022\026\n\tthreshold\030\010 \001(\005:\003255", 352);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "collision_map_request.proto", &protobuf_RegisterTypes);
  CollisionMapRequest::default_instance_ = new CollisionMapRequest();
  CollisionMapRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_collision_5fmap_5frequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_collision_5fmap_5frequest_2eproto {
  StaticDescriptorInitializer_collision_5fmap_5frequest_2eproto() {
    protobuf_AddDesc_collision_5fmap_5frequest_2eproto();
  }
} static_descriptor_initializer_collision_5fmap_5frequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CollisionMapRequest::kUpperLeftFieldNumber;
const int CollisionMapRequest::kUpperRightFieldNumber;
const int CollisionMapRequest::kLowerRightFieldNumber;
const int CollisionMapRequest::kLowerLeftFieldNumber;
const int CollisionMapRequest::kHeightFieldNumber;
const int CollisionMapRequest::kResolutionFieldNumber;
const int CollisionMapRequest::kFilenameFieldNumber;
const int CollisionMapRequest::kThresholdFieldNumber;
#endif  // !_MSC_VER

CollisionMapRequest::CollisionMapRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:collision_map_creator_msgs.msgs.CollisionMapRequest)
}

void CollisionMapRequest::InitAsDefaultInstance() {
  upperleft_ = const_cast< ::gazebo::msgs::Vector2d*>(&::gazebo::msgs::Vector2d::default_instance());
  upperright_ = const_cast< ::gazebo::msgs::Vector2d*>(&::gazebo::msgs::Vector2d::default_instance());
  lowerright_ = const_cast< ::gazebo::msgs::Vector2d*>(&::gazebo::msgs::Vector2d::default_instance());
  lowerleft_ = const_cast< ::gazebo::msgs::Vector2d*>(&::gazebo::msgs::Vector2d::default_instance());
}

CollisionMapRequest::CollisionMapRequest(const CollisionMapRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:collision_map_creator_msgs.msgs.CollisionMapRequest)
}

void CollisionMapRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  upperleft_ = NULL;
  upperright_ = NULL;
  lowerright_ = NULL;
  lowerleft_ = NULL;
  height_ = 0;
  resolution_ = 0;
  filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  threshold_ = 255;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CollisionMapRequest::~CollisionMapRequest() {
  // @@protoc_insertion_point(destructor:collision_map_creator_msgs.msgs.CollisionMapRequest)
  SharedDtor();
}

void CollisionMapRequest::SharedDtor() {
  if (filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete filename_;
  }
  if (this != default_instance_) {
    delete upperleft_;
    delete upperright_;
    delete lowerright_;
    delete lowerleft_;
  }
}

void CollisionMapRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CollisionMapRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CollisionMapRequest_descriptor_;
}

const CollisionMapRequest& CollisionMapRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_collision_5fmap_5frequest_2eproto();
  return *default_instance_;
}

CollisionMapRequest* CollisionMapRequest::default_instance_ = NULL;

CollisionMapRequest* CollisionMapRequest::New() const {
  return new CollisionMapRequest;
}

void CollisionMapRequest::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<CollisionMapRequest*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(height_, resolution_);
    if (has_upperleft()) {
      if (upperleft_ != NULL) upperleft_->::gazebo::msgs::Vector2d::Clear();
    }
    if (has_upperright()) {
      if (upperright_ != NULL) upperright_->::gazebo::msgs::Vector2d::Clear();
    }
    if (has_lowerright()) {
      if (lowerright_ != NULL) lowerright_->::gazebo::msgs::Vector2d::Clear();
    }
    if (has_lowerleft()) {
      if (lowerleft_ != NULL) lowerleft_->::gazebo::msgs::Vector2d::Clear();
    }
    if (has_filename()) {
      if (filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        filename_->clear();
      }
    }
    threshold_ = 255;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CollisionMapRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Vector2d upperLeft = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_upperleft()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_upperRight;
        break;
      }

      // required .gazebo.msgs.Vector2d upperRight = 2;
      case 2: {
        if (tag == 18) {
         parse_upperRight:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_upperright()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_lowerRight;
        break;
      }

      // required .gazebo.msgs.Vector2d lowerRight = 3;
      case 3: {
        if (tag == 26) {
         parse_lowerRight:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_lowerright()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_lowerLeft;
        break;
      }

      // required .gazebo.msgs.Vector2d lowerLeft = 4;
      case 4: {
        if (tag == 34) {
         parse_lowerLeft:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_lowerleft()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_height;
        break;
      }

      // required double height = 5;
      case 5: {
        if (tag == 41) {
         parse_height:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &height_)));
          set_has_height();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_resolution;
        break;
      }

      // required double resolution = 6;
      case 6: {
        if (tag == 49) {
         parse_resolution:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &resolution_)));
          set_has_resolution();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_filename;
        break;
      }

      // optional string filename = 7 [default = ""];
      case 7: {
        if (tag == 58) {
         parse_filename:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_filename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->filename().data(), this->filename().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "filename");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_threshold;
        break;
      }

      // optional int32 threshold = 8 [default = 255];
      case 8: {
        if (tag == 64) {
         parse_threshold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &threshold_)));
          set_has_threshold();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:collision_map_creator_msgs.msgs.CollisionMapRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:collision_map_creator_msgs.msgs.CollisionMapRequest)
  return false;
#undef DO_
}

void CollisionMapRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  // required .gazebo.msgs.Vector2d upperLeft = 1;
  if (has_upperleft()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->upperleft(), output);
  }

  // required .gazebo.msgs.Vector2d upperRight = 2;
  if (has_upperright()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->upperright(), output);
  }

  // required .gazebo.msgs.Vector2d lowerRight = 3;
  if (has_lowerright()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->lowerright(), output);
  }

  // required .gazebo.msgs.Vector2d lowerLeft = 4;
  if (has_lowerleft()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->lowerleft(), output);
  }

  // required double height = 5;
  if (has_height()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->height(), output);
  }

  // required double resolution = 6;
  if (has_resolution()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->resolution(), output);
  }

  // optional string filename = 7 [default = ""];
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "filename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->filename(), output);
  }

  // optional int32 threshold = 8 [default = 255];
  if (has_threshold()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->threshold(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:collision_map_creator_msgs.msgs.CollisionMapRequest)
}

::google::protobuf::uint8* CollisionMapRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  // required .gazebo.msgs.Vector2d upperLeft = 1;
  if (has_upperleft()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->upperleft(), target);
  }

  // required .gazebo.msgs.Vector2d upperRight = 2;
  if (has_upperright()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->upperright(), target);
  }

  // required .gazebo.msgs.Vector2d lowerRight = 3;
  if (has_lowerright()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->lowerright(), target);
  }

  // required .gazebo.msgs.Vector2d lowerLeft = 4;
  if (has_lowerleft()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->lowerleft(), target);
  }

  // required double height = 5;
  if (has_height()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->height(), target);
  }

  // required double resolution = 6;
  if (has_resolution()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->resolution(), target);
  }

  // optional string filename = 7 [default = ""];
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "filename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->filename(), target);
  }

  // optional int32 threshold = 8 [default = 255];
  if (has_threshold()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->threshold(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:collision_map_creator_msgs.msgs.CollisionMapRequest)
  return target;
}

int CollisionMapRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Vector2d upperLeft = 1;
    if (has_upperleft()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->upperleft());
    }

    // required .gazebo.msgs.Vector2d upperRight = 2;
    if (has_upperright()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->upperright());
    }

    // required .gazebo.msgs.Vector2d lowerRight = 3;
    if (has_lowerright()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->lowerright());
    }

    // required .gazebo.msgs.Vector2d lowerLeft = 4;
    if (has_lowerleft()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->lowerleft());
    }

    // required double height = 5;
    if (has_height()) {
      total_size += 1 + 8;
    }

    // required double resolution = 6;
    if (has_resolution()) {
      total_size += 1 + 8;
    }

    // optional string filename = 7 [default = ""];
    if (has_filename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->filename());
    }

    // optional int32 threshold = 8 [default = 255];
    if (has_threshold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->threshold());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CollisionMapRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CollisionMapRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CollisionMapRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CollisionMapRequest::MergeFrom(const CollisionMapRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_upperleft()) {
      mutable_upperleft()->::gazebo::msgs::Vector2d::MergeFrom(from.upperleft());
    }
    if (from.has_upperright()) {
      mutable_upperright()->::gazebo::msgs::Vector2d::MergeFrom(from.upperright());
    }
    if (from.has_lowerright()) {
      mutable_lowerright()->::gazebo::msgs::Vector2d::MergeFrom(from.lowerright());
    }
    if (from.has_lowerleft()) {
      mutable_lowerleft()->::gazebo::msgs::Vector2d::MergeFrom(from.lowerleft());
    }
    if (from.has_height()) {
      set_height(from.height());
    }
    if (from.has_resolution()) {
      set_resolution(from.resolution());
    }
    if (from.has_filename()) {
      set_filename(from.filename());
    }
    if (from.has_threshold()) {
      set_threshold(from.threshold());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CollisionMapRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CollisionMapRequest::CopyFrom(const CollisionMapRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CollisionMapRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  if (has_upperleft()) {
    if (!this->upperleft().IsInitialized()) return false;
  }
  if (has_upperright()) {
    if (!this->upperright().IsInitialized()) return false;
  }
  if (has_lowerright()) {
    if (!this->lowerright().IsInitialized()) return false;
  }
  if (has_lowerleft()) {
    if (!this->lowerleft().IsInitialized()) return false;
  }
  return true;
}

void CollisionMapRequest::Swap(CollisionMapRequest* other) {
  if (other != this) {
    std::swap(upperleft_, other->upperleft_);
    std::swap(upperright_, other->upperright_);
    std::swap(lowerright_, other->lowerright_);
    std::swap(lowerleft_, other->lowerleft_);
    std::swap(height_, other->height_);
    std::swap(resolution_, other->resolution_);
    std::swap(filename_, other->filename_);
    std::swap(threshold_, other->threshold_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CollisionMapRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CollisionMapRequest_descriptor_;
  metadata.reflection = CollisionMapRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace collision_map_creator_msgs

// @@protoc_insertion_point(global_scope)
