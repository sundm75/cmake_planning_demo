project(planning_main)

add_subdirectory(pnc_map)
add_subdirectory(process)
add_subdirectory(show_result)

# 生成可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)

# 添加头文件路径
target_include_directories(${PROJECT_NAME} 
    PUBLIC
    ${Process_Dir} 
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/third_party/easyx/include
)   

target_include_directories(${PROJECT_NAME} 
    PUBLIC
    ${Show_result_Dir} 
)

# 添加库路径
target_link_directories(${PROJECT_NAME}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/third_party/easyx/lib64
)

# 添加库
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    process
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    show_result
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    easyx
)
