project(show_result)

# 设置文件变量
file(GLOB SHOW_RESULT_SRC_LISTS  ${CMAKE_CURRENT_SOURCE_DIR}/*.c ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp )

# 生成库
add_library(${PROJECT_NAME}
SHARED
${SHOW_RESULT_SRC_LISTS}
)

# 添加库头文件路径
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/third_party/easyx/include
)   

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${Process_Dir}
) 

# 添加库路径
target_link_directories(${PROJECT_NAME}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/third_party/easyx/lib64
)

# 添加库链接
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    process
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    easyx
)

