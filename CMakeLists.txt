# Single Link List
# File: CMakeLists.txt
# Learn Cpp
# Created by Luu Kien on 21/01/2011
# Copyrighted © 2022 Luu Kien. All rights reserved

cmake_minimum_required(VERSION 3.0)

set (TARGET_NAME "SingleLinkList")

set(sources 
            include/addElement.hpp
            include/exportList.hpp
            include/findMax.hpp
            include/initNode.hpp
            src/addElement.cpp
            src/exportList.cpp
            src/findMax.cpp
            src/initNode.cpp
            main.cpp
            )
add_executable(${TARGET_NAME} ${sources})


# link_directories(${LIB_FOLDER})
# add_dependencies(${TARGET_NAME} gflags)
# set_target_properties(${TARGET_NAME} PROPERTIES "CMAKE_CXX_FLAGS" "${CMAKE_CXX_FLAGS} -fPIE"
#   COMPILE_PDB_NAME ${TARGET_NAME})