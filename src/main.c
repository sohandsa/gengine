#include "glad/glad.h"
#include <GLFW/glfw3.h>
#include <stdio.h>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main() {
  if (!glfwInit()) {
    fprintf(stderr, "Failed to initialize GLFW\n");
    return -1;
  }
  // --- NEW HINTS ---
  // Hint that the window should not be visible initially
  glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
  // Hint that the window should be "floating" not "tiled"
  glfwWindowHint(GLFW_FLOATING, GLFW_TRUE);

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow *window =
      glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "C Animation Engine", NULL, NULL);

  if (window == NULL) {
    fprintf(stderr, "Failed to create GLFW Window\n");
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    fprintf(stderr, "Failed to initialize GLAD\n");
    return -1;
  }
  int frameCount = 0;
  while (!glfwWindowShouldClose(window)) {
    if (frameCount % 60 == 0) { // Print once every 60 frames
      printf("Render loop is running... Frame: %d\n", frameCount);
    }
    frameCount++;
    glClearColor(0.1f, 0.1f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwPollEvents();
  }

  glfwTerminate();

  return 0;
}
