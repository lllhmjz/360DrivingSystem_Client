cmake_minimum_required(VERSION 3.21)
project(360DrivingSystem_Client)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(360DrivingSystem_Client main.cpp)
target_link_libraries(360DrivingSystem_Client
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

