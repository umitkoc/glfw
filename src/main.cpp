#include <iostream>
#include "gl.h"
#include <GLFW/glfw3.h>

auto main() -> int
{
    if (!glfwInit())
    {
        return -1;
    }
    GLFWwindow *window = glfwCreateWindow(800, 600, "Deneme", NULL, NULL);
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