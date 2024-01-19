cmake_minimum_required(VERSION 3.10)
if(WIN32)
    set(HOME_DIR $ENV{USERPROFILE})
    set(CMAKE_TOOLCHAIN_FILE "${HOME_DIR}\\scoop\\apps\\vcpkg\\current\\scripts\\buildsystems\\vcpkg.cmake")
endif(WIN32)
project(CPPArena)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)

# add the directories containing the header files to the search path
include_directories(include)

# collect all source files from the src directory
set(SOURCES "src/main.cpp" "src/arena.cpp")
# create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

