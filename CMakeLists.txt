cmake_minimum_required(VERSION 3.22)
project(lab_clap)

enable_testing()
project(LAB_CLAP C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)

include_directories(catch2/single_include)

find_package(Qt6 COMPONENTS Widgets Gui Qml Quick REQUIRED)
add_compile_definitions(QT_DISABLE_DEPRECATED_BEFORE=0x060000)

add_subdirectory(clap EXCLUDE_FROM_ALL)
add_subdirectory(clap-helpers EXCLUDE_FROM_ALL)

add_executable(lab_clap main.cpp)

target_link_libraries(lab_clap PUBLIC clap-helpers)
target_link_libraries(lab_clap PUBLIC Qt6::Widgets Qt6::Gui Qt6::Quick)
