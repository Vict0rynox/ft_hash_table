cmake_minimum_required(VERSION 3.7)
project(ft_hash_table)

set(CMAKE_C_STANDARD 99)

include_directories(libft)

set(SOURCE_FILES ft_hash_table.h ft_new_hash_table.c ft_get_key_id.c ft_has_item.c ft_get_item.c ft_set_item.c ft_add_item.c ft_del_item.c)

set(TEST_SOURCE_FILES main-test.c)

#add_library(ft_hash_table libft ${SOURCE_FILES})

add_executable(ft_hash_table ${TEST_SOURCE_FILES} ${SOURCE_FILES})

add_subdirectory(libft)

target_link_libraries(ft_hash_table libft)