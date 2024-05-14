cmake_minimum_required(VERSION 3.10)
project(smart-particles-sandbox DESCRIPTION "Smart particles sandbox")
set(CMAKE_SUPPRESS_REGENERATION true)

# Include directories for sandbox, GLFW, and glad
include_directories(sources)
include_directories(sources/third-party/glfw/include)
include_directories(sources/third-party/glad/include)

# Add source
set(GLAD_SOURCE_DIR sources/third-party/glad)
file(GLOB_RECURSE GLAD_SOURCE "${GLAD_SOURCE_DIR}/*.c"  "${GLAD_SOURCE_DIR}/*.h")

# Add glfw source
set(GLFW_SOURCE_DIR sources/third-party/glfw)
file(GLOB_RECURSE GLFW_SOURCE "${GLFW_SOURCE_DIR}/*.h")

# Add sandbox source
set(SANDBOX_SOURCE_DIR sources/sandbox)
file(GLOB_RECURSE SANDBOX_SOURCE "${SANDBOX_SOURCE_DIR}/*.cpp"  "${SANDBOX_SOURCE_DIR}/*.h")

# Link GLFW library
link_directories(sources/third-party/glfw/lib-vc2022)

# Add executable
add_executable(${PROJECT_NAME} ${GLAD_SOURCE} ${GLFW_SOURCE} ${SANDBOX_SOURCE})

# Group source files in the project structure of the IDE
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${GLAD_SOURCE} ${GLFW_SOURCE} ${SANDBOX_SOURCE})

# Link GLFW library to the executable
target_link_libraries(${PROJECT_NAME} glfw3_mt)

# Set the startup project in Visual Studio
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})