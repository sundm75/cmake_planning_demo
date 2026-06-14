cmake_minimum_required(VERSION 4.2.0)
project(planning
VERSION 1.0.0
DESCRIPTION "a demo of cmake planning"
HOMEPAGE_URL "https://github.com/sundm75/cmake_planning_demo.git"
LANGUAGES CXX
)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)

# 路径变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_result_Dir ${CMAKE_SOURCE_DIR}/src/show_result)


#添加子目录
add_subdirectory(src)


