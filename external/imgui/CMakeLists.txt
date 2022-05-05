project(imgui VERSION 1.0)

add_library(${PROJECT_NAME}
  imgui.cpp
  imgui_widgets.cpp
  imgui_tables.cpp
  imgui_draw.cpp
  imgui_demo.cpp
  imgui_impl_glfw.cpp
  imgui_impl_opengl3.cpp
)

target_link_libraries(${PROJECT_NAME} glfw)