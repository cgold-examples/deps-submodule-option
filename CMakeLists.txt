cmake_minimum_required(VERSION 3.2)
project(foo)

option(FOO_WITH_A "Use 'a' module" ON)

add_executable(foo foo.cpp)

if(FOO_WITH_A)
  add_subdirectory(third_party/a)
  target_link_libraries(foo PUBLIC a::a)
  target_compile_definitions(foo PUBLIC FOO_WITH_A)
endif()

add_subdirectory(third_party/b)
target_link_libraries(foo PUBLIC b::b)

enable_testing()
add_test(NAME foo COMMAND foo)
