cmake_minimum_required(VERSION 3.23)
project(VulkanTest VERSION 1.0)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} main.cpp)

# use logic
add_subdirectory(src)
list(APPEND EXTRA_LIBS header)
list(APPEND EXTRA_INCLUDES ${PROJECT_SOURCE_DIR}/src)

# adds configure file that builds in /build directory as ProjectConfig.h
configure_file(ProjectConfig.h.in ProjectConfig.h)

add_subdirectory(external/glfw)
add_subdirectory(external/glm)
add_subdirectory(external/imgui)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

target_include_directories(${PROJECT_NAME} 
  PUBLIC ${EXTRA_INCLUDES}
  PUBLIC C:\\VulkanSDK\\1.3.211.0\\include
  PUBLIC external/glfw/include
  PUBLIC external/glm/
  PUBLIC external/imgui
)

target_link_directories(${PROJECT_NAME} 
  PUBLIC C:\\VulkanSDK\\1.3.211.0\\Lib
  PUBLIC external/glfw/src
  PUBLIC external/glm/
  PUBLIC external/imgui
)


target_link_libraries(${PROJECT_NAME} PUBLIC ${EXTRA_LIBS} vulkan-1 glfw glm imgui opengl32)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)