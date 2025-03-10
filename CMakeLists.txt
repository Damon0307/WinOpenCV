cmake_minimum_required(VERSION 3.10)
project(test_opencv)

# 设置C++标准
set(CMAKE_CXX_STANDARD 14)

# 手动指定 OpenCV 配置目录
set(OpenCV_DIR "D:/wjc_soft_install/OpenCV4.11/opencv/build/x64/mingw/lib")

# 查找 OpenCV 库
find_package(OpenCV REQUIRED)

# 包含 OpenCV 头文件目录
include_directories(${OpenCV_INCLUDE_DIRS})

# 设置库路径
link_directories(D:/wjc_soft_install/OpenCV4.11/opencv/build/x64/mingw/lib)
#加一个路径 D:\wjc_soft_install\OpenCV4.11\opencv\build\x64\mingw\bin
link_directories(D:/wjc_soft_install/OpenCV4.11/opencv/build/x64/mingw/bin)

# 指定要编译的源文件
add_executable(test_opencv main.cpp)

# 链接 OpenCV 库
target_link_libraries(test_opencv ${OpenCV_LIBS})
