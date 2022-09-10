# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.20.2)
aux_source_directory(. DIR_SRCS)
# 指定生成目标
add_executable(Observer ${DIR_SRCS})