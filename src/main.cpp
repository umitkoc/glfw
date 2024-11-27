#include <iostream>
#include <glm/mat4x4.hpp>
#include <glad/gl.h>
#include "gl.h"
#include <GLFW/glfw3.h>
auto main() -> int
{
    if (!glfwInit())
    {
        return -1;
    }
    GLFWwindow *window = glfwCreateWindow(800, 600, "Deneme", NULL, NULL);

    glm::mat4 mat;

    if (window == NULL)
    {
        std::cout << "window is not working" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window))
    {

        glfwSwapBuffers(window);



        glfwPollEvents();
    }

    return 0;
}