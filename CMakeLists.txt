cmake_minimum_required(VERSION 3.10)

# Remove when sharing with others.
list(APPEND CMAKE_PREFIX_PATH "/home/david/project/build-qt-creator-Desktop_Qt_5_15_2_GCC_64bit-Debug")

project(Untitled)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)

find_package(QtCreator COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_qtc_plugin(Untitled
  PLUGIN_DEPENDS
    QtCreator::Core
  DEPENDS
    Qt5::Widgets
    QtCreator::ExtensionSystem
    QtCreator::Utils
  SOURCES
    .github/workflows/build_cmake.yml
    .github/workflows/README.md
    README.md
    untitled.cpp
    untitled.h
    untitled_global.h
    untitledconstants.h
)
