cmake_minimum_required(VERSION 3.21)
project(test_protobuf)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(PROTO_SRC PROTO_HDR students.proto)

add_executable(test_protobuf main.cpp ${PROTO_SRC} ${PROTO_HDR} students.proto)
target_link_libraries(test_protobuf ${PROTOBUF_LIBRARY})
