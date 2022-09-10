# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.20.2)
# 项目信息
project (design_pattern)
# 查找当前目录下的所有源文件,并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
# 添加子目录
add_subdirectory(Singleton)
add_subdirectory(Factory)
add_subdirectory(AbstractFactory)
add_subdirectory(Observer)
add_subdirectory(Proxy)
add_subdirectory(Facade)
# 指定生成目标
#add_executable(Singleton $DIR_SRCS)
#添加可执行文件所需要的库
#TARGET_LINK_LIBRARIES(Singleton)