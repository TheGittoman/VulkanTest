project(header)

add_library(${PROJECT_NAME} header.cpp)

target_include_directories(${PROJECT_NAME} 
  PUBLIC C:\\VulkanSDK\\1.3.211.0\\include
)

target_link_libraries(${PROJECT_NAME} vulkan-1 glfw)