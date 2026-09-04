cmake_minimum_required(VERSION 3.10)
project(KillTheGeneral VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KillTheGeneral src/main.cpp)

target_compile_options(KillTheGeneral PRIVATE
    $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:-Wall -Wextra -Wpedantic>
)
