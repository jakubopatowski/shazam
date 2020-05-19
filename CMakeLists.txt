cmake_minimum_required(VERSION 3.4)

add_executable(project main.cpp)

#set(CMAKE_PREFIX_PATH "./json/build")
set(nlohmann_json_DIR "./json/build")
find_package(nlohmann_json 3.2.0 REQUIRED)

target_link_libraries(project PRIVATE nlohmann_json::nlohmann_json)
