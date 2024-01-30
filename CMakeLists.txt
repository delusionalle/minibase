cmake_minimum_required(VERSION 3.27)
project(minibase)

include_directories(src)

set(CMAKE_CXX_STANDARD 23)

add_executable(minibase src/Main.cpp
        src/Support.hpp
        src/db/Database.cpp
        src/db/Database.hpp
        src/sup/termcolor.hpp
        src/io/stdout.cpp
        src/io/stdout.hpp
        src/db/DbAction.cpp
        src/db/DbAction.hpp
        src/db/fs/DbFsHandle.cpp
        src/db/fs/DbFsHandle.hpp
        src/db/Data.cpp
        src/db/Data.hpp
)
