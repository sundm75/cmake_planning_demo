project(process)

# 设置文件变量
file(GLOB PROCESS_SRC_LISTS  ${CMAKE_CURRENT_SOURCE_DIR}/*.c ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp )


# 生成库
add_library(${PROJECT_NAME}
    SHARED
    ${PROCESS_SRC_LISTS}
)

# 添加库头文件路径
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${Pnc_map_Dir}
) 

# 添加库链接
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    pnc_map
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    Eigen3::Eigen
)
