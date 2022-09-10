# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.20.2)
# 项目信息
#project (Singleton)
# 查找当前目录下的所有源文件,并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
# 生成链接库
#add_library (Singleton ${DIR_SRCS})
# 指定生成目标
add_executable(Singleton Singleton.cc)