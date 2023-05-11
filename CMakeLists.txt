cmake_minimum_required(VERSION 3.25)
project(NetifeCppPluginTemplateV1)

set(CMAKE_CXX_STANDARD 23)

find_package(Poco REQUIRED Foundation)

add_library(NetifeCppPluginTemplateV1
        include/plugins/v1/NetifePlugins.h
        include/plugins/v1/NetifePluginAgent.h
        library.h
        library.cpp DemoClass.cpp DemoClass.h)
target_link_libraries(NetifeCppPluginTemplateV1 PRIVATE Poco::Foundation)