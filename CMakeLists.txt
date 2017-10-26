cmake_minimum_required(VERSION 3.0)

include("cmake/HunterGate.cmake")

HunterGate(
  URL "https://github.com/ruslo/hunter/archive/v0.10.9.tar.gz"
  SHA1 "53b198e364dc7bc8360fc545f798563229bd7e20"
)

project(Foo)

hunter_add_package(Boost)

find_package(Boost CONFIG REQUIRED)

add_executable(foo foo.cpp)
#target_link_libraries(foo Boost:boot)
target_include_directories(foo PRIVATE ${Boost_INCLUDE_DIRS})
