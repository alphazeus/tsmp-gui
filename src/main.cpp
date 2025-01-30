// Copyright Ferdinand 2025
// GLFW + Dear ImGui based audio player application

#include "backendControl.h"
#include "rendercontent.h"


// Main code
int main(int, char **) {
  // Initialize the openGLController object
  openGLController openGLControl;

  // Initialize the GLFW window
  openGLControl.window =
      openGLControl.initGlfwWindow(1280, 720, "Color Picker");
  if (openGLControl.window == nullptr)
    return 1;

  // Start the ImGui settings with GLFW
  openGLControl.startImGuiWithGlfw(openGLControl.window);

  // Main loop for the event control and rendering
  openGLControl.runMainLoop(openGLControl.window);

  // Perform a clean closing of all the initialized resources
  openGLControl.closeAndCleanup(openGLControl.window);

  return 0;
}
