cmake_minimum_required(VERSION 3.07.0)

set(PROJECT_NAME DreamyEngine)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

set(BUILD_SHARED_LIBS OFF)

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)
find_library(glfw3 opengl32)

if (WIN32)
    link_libraries(opengl32 glfw3)
else()
    link_libraries(glfw)
endif()

set(COMPILE_FLAGS "${COMPILE_FLAGS} -static")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(DreamyEngine ${CMAKE_SOURCE_DIR}/src/main.cpp  ${CMAKE_SOURCE_DIR}/src/external/glad.c ${CMAKE_SOURCE_DIR}/src/Window.cpp)

file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR}/bin/)