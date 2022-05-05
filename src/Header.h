#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <vector>

class Test
{
public:
  void print();

private:
  void doStuff();
};

class HelloTriangleApplication
{
private:
  GLFWwindow *window;
  const uint32_t WIDTH = 800;
  const uint32_t HEIGHT = 600;
  VkInstance instance;

public:
  void run()
  {
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
  }

private:
  void initWindow();

  void initVulkan();

  void mainLoop();

  void cleanup();

  void createInstance();
};