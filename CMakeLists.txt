cmake_minimum_required(VERSION 3.16)
project(HelloWorldQt VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Quick REQUIRED)

qt_add_executable(HelloWorldQt
    main.cpp
    backend.cpp
    core.c
)

qt_add_qml_module(HelloWorldQt
    URI "App"
    VERSION 1.0
    QML_FILES Main.qml
)

target_link_libraries(HelloWorldQt PRIVATE Qt6::Quick)
