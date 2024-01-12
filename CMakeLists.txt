cmake_minimum_required(VERSION 3.8)
project(map_prj C)

add_executable(map_prj main.c ./Queue/queue.c ./List/list.c ./Graph/graph.c)
include_directories(./Queue ./List ./Graph)
set_target_properties(map_prj PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")
