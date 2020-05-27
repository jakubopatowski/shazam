cmake_minimum_required(VERSION 3.4)
project(shazam)
add_executable(shazam main.cpp)

set(nlohmann_json_DIR "./json/build")
find_package(nlohmann_json 3.2.0 REQUIRED)

target_link_libraries(shazam PRIVATE nlohmann_json::nlohmann_json)
target_include_directories(shazam
  PRIVATE
  .
  "./json/include")

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  include(CTest)
endif()

option(PACKAGE_TESTS "Build the testes" ON)
if(PACKAGE_TESTS)
  enable_testing()
  include(GoogleTest)
  add_subdirectory(tests)
endif()

