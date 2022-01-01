// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: students.proto

#include "students.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace Student {
constexpr FullName::FullName(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , surname_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , patronymic_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct FullNameDefaultTypeInternal {
  constexpr FullNameDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~FullNameDefaultTypeInternal() {}
  union {
    FullName _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FullNameDefaultTypeInternal _FullName_default_instance_;
constexpr Student::Student(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : scores_()
  , _scores_cached_byte_size_(0)
  , fullname_(nullptr)
  , average_score_(0){}
struct StudentDefaultTypeInternal {
  constexpr StudentDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StudentDefaultTypeInternal() {}
  union {
    Student _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StudentDefaultTypeInternal _Student_default_instance_;
constexpr StudentsGroup::StudentsGroup(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : students_(){}
struct StudentsGroupDefaultTypeInternal {
  constexpr StudentsGroupDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StudentsGroupDefaultTypeInternal() {}
  union {
    StudentsGroup _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace Student
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_students_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_students_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_students_2eproto = nullptr;

const uint32_t TableStruct_students_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Student::FullName, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Student::FullName, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Student::FullName, name_),
  PROTOBUF_FIELD_OFFSET(::Student::FullName, surname_),
  PROTOBUF_FIELD_OFFSET(::Student::FullName, patronymic_),
  ~0u,
  ~0u,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Student::Student, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Student::Student, fullname_),
  PROTOBUF_FIELD_OFFSET(::Student::Student, scores_),
  PROTOBUF_FIELD_OFFSET(::Student::Student, average_score_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Student::StudentsGroup, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Student::StudentsGroup, students_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::Student::FullName)},
  { 12, -1, -1, sizeof(::Student::Student)},
  { 21, -1, -1, sizeof(::Student::StudentsGroup)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Student::_FullName_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Student::_Student_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Student::_StudentsGroup_default_instance_),
};

const char descriptor_table_protodef_students_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016students.proto\022\007Student\"Q\n\010FullName\022\014\n"
  "\004name\030\001 \001(\t\022\017\n\007surname\030\002 \001(\t\022\027\n\npatronym"
  "ic\030\003 \001(\tH\000\210\001\001B\r\n\013_patronymic\"U\n\007Student\022"
  "#\n\010fullname\030\001 \001(\0132\021.Student.FullName\022\016\n\006"
  "scores\030\002 \003(\005\022\025\n\raverage_score\030\003 \001(\001\"3\n\rS"
  "tudentsGroup\022\"\n\010students\030\001 \003(\0132\020.Student"
  ".Studentb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_students_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_students_2eproto = {
  false, false, 256, descriptor_table_protodef_students_2eproto, "students.proto", 
  &descriptor_table_students_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_students_2eproto::offsets,
  file_level_metadata_students_2eproto, file_level_enum_descriptors_students_2eproto, file_level_service_descriptors_students_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_students_2eproto_getter() {
  return &descriptor_table_students_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_students_2eproto(&descriptor_table_students_2eproto);
namespace Student {

// ===================================================================

class FullName::_Internal {
 public:
  using HasBits = decltype(std::declval<FullName>()._has_bits_);
  static void set_has_patronymic(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

FullName::FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Student.FullName)
}
FullName::FullName(const FullName& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  surname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    surname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_surname().empty()) {
    surname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_surname(), 
      GetArenaForAllocation());
  }
  patronymic_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    patronymic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_patronymic()) {
    patronymic_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_patronymic(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:Student.FullName)
}

inline void FullName::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
surname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  surname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
patronymic_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  patronymic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

FullName::~FullName() {
  // @@protoc_insertion_point(destructor:Student.FullName)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void FullName::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  surname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  patronymic_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void FullName::ArenaDtor(void* object) {
  FullName* _this = reinterpret_cast< FullName* >(object);
  (void)_this;
}
void FullName::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FullName::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FullName::Clear() {
// @@protoc_insertion_point(message_clear_start:Student.FullName)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  surname_.ClearToEmpty();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    patronymic_.ClearNonDefaultToEmpty();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FullName::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Student.FullName.name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string surname = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_surname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Student.FullName.surname"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string patronymic = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_patronymic();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Student.FullName.patronymic"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FullName::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Student.FullName)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Student.FullName.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // string surname = 2;
  if (!this->_internal_surname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_surname().data(), static_cast<int>(this->_internal_surname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Student.FullName.surname");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_surname(), target);
  }

  // optional string patronymic = 3;
  if (_internal_has_patronymic()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_patronymic().data(), static_cast<int>(this->_internal_patronymic().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Student.FullName.patronymic");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_patronymic(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Student.FullName)
  return target;
}

size_t FullName::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Student.FullName)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string surname = 2;
  if (!this->_internal_surname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_surname());
  }

  // optional string patronymic = 3;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_patronymic());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FullName::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    FullName::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FullName::GetClassData() const { return &_class_data_; }

void FullName::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<FullName *>(to)->MergeFrom(
      static_cast<const FullName &>(from));
}


void FullName::MergeFrom(const FullName& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Student.FullName)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (!from._internal_surname().empty()) {
    _internal_set_surname(from._internal_surname());
  }
  if (from._internal_has_patronymic()) {
    _internal_set_patronymic(from._internal_patronymic());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FullName::CopyFrom(const FullName& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Student.FullName)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FullName::IsInitialized() const {
  return true;
}

void FullName::InternalSwap(FullName* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &surname_, lhs_arena,
      &other->surname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &patronymic_, lhs_arena,
      &other->patronymic_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata FullName::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_students_2eproto_getter, &descriptor_table_students_2eproto_once,
      file_level_metadata_students_2eproto[0]);
}

// ===================================================================

class Student::_Internal {
 public:
  static const ::Student::FullName& fullname(const Student* msg);
};

const ::Student::FullName&
Student::_Internal::fullname(const Student* msg) {
  return *msg->fullname_;
}
Student::Student(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  scores_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Student.Student)
}
Student::Student(const Student& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      scores_(from.scores_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_fullname()) {
    fullname_ = new ::Student::FullName(*from.fullname_);
  } else {
    fullname_ = nullptr;
  }
  average_score_ = from.average_score_;
  // @@protoc_insertion_point(copy_constructor:Student.Student)
}

inline void Student::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&fullname_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&average_score_) -
    reinterpret_cast<char*>(&fullname_)) + sizeof(average_score_));
}

Student::~Student() {
  // @@protoc_insertion_point(destructor:Student.Student)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Student::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete fullname_;
}

void Student::ArenaDtor(void* object) {
  Student* _this = reinterpret_cast< Student* >(object);
  (void)_this;
}
void Student::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Student::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Student::Clear() {
// @@protoc_insertion_point(message_clear_start:Student.Student)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  scores_.Clear();
  if (GetArenaForAllocation() == nullptr && fullname_ != nullptr) {
    delete fullname_;
  }
  fullname_ = nullptr;
  average_score_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Student::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .Student.FullName fullname = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_fullname(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 scores = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_scores(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          _internal_add_scores(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // double average_score = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          average_score_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Student::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Student.Student)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .Student.FullName fullname = 1;
  if (this->_internal_has_fullname()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::fullname(this), target, stream);
  }

  // repeated int32 scores = 2;
  {
    int byte_size = _scores_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          2, _internal_scores(), byte_size, target);
    }
  }

  // double average_score = 3;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_average_score = this->_internal_average_score();
  uint64_t raw_average_score;
  memcpy(&raw_average_score, &tmp_average_score, sizeof(tmp_average_score));
  if (raw_average_score != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_average_score(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Student.Student)
  return target;
}

size_t Student::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Student.Student)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 scores = 2;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->scores_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<int32_t>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _scores_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // .Student.FullName fullname = 1;
  if (this->_internal_has_fullname()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *fullname_);
  }

  // double average_score = 3;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_average_score = this->_internal_average_score();
  uint64_t raw_average_score;
  memcpy(&raw_average_score, &tmp_average_score, sizeof(tmp_average_score));
  if (raw_average_score != 0) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Student::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Student::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Student::GetClassData() const { return &_class_data_; }

void Student::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Student *>(to)->MergeFrom(
      static_cast<const Student &>(from));
}


void Student::MergeFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Student.Student)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  scores_.MergeFrom(from.scores_);
  if (from._internal_has_fullname()) {
    _internal_mutable_fullname()->::Student::FullName::MergeFrom(from._internal_fullname());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_average_score = from._internal_average_score();
  uint64_t raw_average_score;
  memcpy(&raw_average_score, &tmp_average_score, sizeof(tmp_average_score));
  if (raw_average_score != 0) {
    _internal_set_average_score(from._internal_average_score());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Student::CopyFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Student.Student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Student::IsInitialized() const {
  return true;
}

void Student::InternalSwap(Student* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  scores_.InternalSwap(&other->scores_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Student, average_score_)
      + sizeof(Student::average_score_)
      - PROTOBUF_FIELD_OFFSET(Student, fullname_)>(
          reinterpret_cast<char*>(&fullname_),
          reinterpret_cast<char*>(&other->fullname_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Student::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_students_2eproto_getter, &descriptor_table_students_2eproto_once,
      file_level_metadata_students_2eproto[1]);
}

// ===================================================================

class StudentsGroup::_Internal {
 public:
};

StudentsGroup::StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  students_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Student.StudentsGroup)
}
StudentsGroup::StudentsGroup(const StudentsGroup& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      students_(from.students_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Student.StudentsGroup)
}

inline void StudentsGroup::SharedCtor() {
}

StudentsGroup::~StudentsGroup() {
  // @@protoc_insertion_point(destructor:Student.StudentsGroup)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void StudentsGroup::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void StudentsGroup::ArenaDtor(void* object) {
  StudentsGroup* _this = reinterpret_cast< StudentsGroup* >(object);
  (void)_this;
}
void StudentsGroup::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StudentsGroup::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StudentsGroup::Clear() {
// @@protoc_insertion_point(message_clear_start:Student.StudentsGroup)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  students_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StudentsGroup::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Student.Student students = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_students(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* StudentsGroup::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Student.StudentsGroup)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Student.Student students = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_students_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_students(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Student.StudentsGroup)
  return target;
}

size_t StudentsGroup::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Student.StudentsGroup)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Student.Student students = 1;
  total_size += 1UL * this->_internal_students_size();
  for (const auto& msg : this->students_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StudentsGroup::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    StudentsGroup::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StudentsGroup::GetClassData() const { return &_class_data_; }

void StudentsGroup::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<StudentsGroup *>(to)->MergeFrom(
      static_cast<const StudentsGroup &>(from));
}


void StudentsGroup::MergeFrom(const StudentsGroup& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Student.StudentsGroup)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  students_.MergeFrom(from.students_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StudentsGroup::CopyFrom(const StudentsGroup& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Student.StudentsGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StudentsGroup::IsInitialized() const {
  return true;
}

void StudentsGroup::InternalSwap(StudentsGroup* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  students_.InternalSwap(&other->students_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StudentsGroup::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_students_2eproto_getter, &descriptor_table_students_2eproto_once,
      file_level_metadata_students_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Student
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Student::FullName* Arena::CreateMaybeMessage< ::Student::FullName >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Student::FullName >(arena);
}
template<> PROTOBUF_NOINLINE ::Student::Student* Arena::CreateMaybeMessage< ::Student::Student >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Student::Student >(arena);
}
template<> PROTOBUF_NOINLINE ::Student::StudentsGroup* Arena::CreateMaybeMessage< ::Student::StudentsGroup >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Student::StudentsGroup >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
