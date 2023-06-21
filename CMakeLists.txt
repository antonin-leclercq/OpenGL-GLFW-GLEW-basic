cmake_minimum_required(VERSION 3.21.3)

# set the project name and VERSION
project(OpenGL-GLFW-GLEW-basic)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the following paths to the correct location on your computer
set(GLFW_BASE_PATH "C:/local/glfw-3.3.8")
set(GLEW_BASE_PATH "C:/local/glew-2.2.0")

# search for GLFW and GLEW include files
find_library(GLFW_LIBRARY glfw3)
find_library(GLEW_LIBRARY glew32sd)

# add the executable
add_executable("${PROJECT_NAME}" shaders.cxx main.cxx)

add_compile_definitions(GLEW_STATIC)

# add GLFW and GLEW include dir and lib dir to project
target_include_directories("${PROJECT_NAME}" PUBLIC "${GLEW_BASE_PATH}/include/")
target_include_directories("${PROJECT_NAME}" PUBLIC "${GLFW_BASE_PATH}/include/")
target_link_directories("${PROJECT_NAME}" PUBLIC "${GLEW_BASE_PATH}/lib/Debug/x64/")
target_link_directories("${PROJECT_NAME}" PUBLIC "${GLFW_BASE_PATH}/lib64/Debug/")

# Add GLFW and GLEW static libraries to project
target_link_libraries("${PROJECT_NAME}" PUBLIC opengl32)
target_link_libraries("${PROJECT_NAME}" PUBLIC glfw3)
target_link_libraries("${PROJECT_NAME}" PUBLIC glew32sd)