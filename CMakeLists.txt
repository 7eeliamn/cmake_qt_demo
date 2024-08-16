cmake_minimum_required(VERSION 3.16)
set(CMAKE_AUTOMOC ON) # For meta object compiler
set(CMAKE_AUTORCC ON) # Resource files
set(CMAKE_AUTOUIC ON) # UI files

project(qt_rviz_demo)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

# 包含头文件目录
include_directories( ${PROJECT_SOURCE_DIR}/include )

  # 源文件
set(SOURCES
    src/main.cpp
    src/qt_rviz_widget.cpp
)
# 创建可执行文件
add_executable(${PROJECT_NAME}  ${SOURCES})

# 链接库
target_link_libraries(${PROJECT_NAME}
  Qt5::Widgets
)




