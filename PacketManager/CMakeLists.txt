cmake_minimum_required(VERSION 3.12)
project(PacketManager)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 CONFIG REQUIRED)
#find_package(SDL2-TTF REQUIRED)

add_executable(PacketManager main.cpp)

target_link_libraries(PacketManager PRIVATE SDL2::SDL2 SDL2::SDL2main)
#target_link_libraries(PacketManager PRIVATE SDL2_ttf::SDL2_ttf)