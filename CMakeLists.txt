# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(AnimationEngine VERSION 1.0)

# Set the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add our project's include directories
include_directories(
    include
    lib # For linmath.h
    lib/cJSON # For cJSON headers
)

# Find the required system packages
find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)

# Add all our source files to a variable
aux_source_directory(src SRC_FILES)

# Add the cJSON source files
list(APPEND SRC_FILES
    lib/cJSON/cJSON.c
)

# Create the executable from our source files
add_executable(${PROJECT_NAME} ${SRC_FILES})

# Link the required libraries to our executable
target_link_libraries(${PROJECT_NAME}
    glfw
    ${OPENGL_LIBRARIES}
)
