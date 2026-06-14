project(process)

file(GLOB PROCESS_SRC_LISTS  ${CMAKE_CURRENT_SOURCE_DIR}/*.c ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp )

add_library(${PROJECT_NAME}
SHARED
${PROCESS_SRC_LISTS}
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Pnc_map_Dir}
) 

target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)
