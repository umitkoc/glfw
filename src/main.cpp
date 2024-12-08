#include <iostream>
#include "shaders.hpp"
#include <glad/gl.h>
#include <GLFW/glfw3.h>
float vertices[] = {
    -0.6f, -0.6f, 0.0f,
    0.5f, -0.5f, 0.0f,
    0.0f, 0.5f, 0.0f};
auto main() -> int
{
    // glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    // glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    // glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
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
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Glad not working" << std::endl;
        return -1;
    }

    ShadersProgram program;
    program.attachShader("./shaders/vs.glsl", GL_VERTEX_SHADER);
    program.attachShader("./shaders/fs.glsl", GL_FRAGMENT_SHADER);
    program.link();

    unsigned int VAO;
    unsigned int VBO;
   //vertex array object oluşturuluyor
    glGenVertexArrays(1, &VAO); 
    //vertex buffer object oluşuruluyor
    glGenBuffers(1,&VBO);

    //vertex array object aktif edildi.
    glBindVertexArray(VAO);
    //vertex buffer nesnesi aktif edildi.
    glBindBuffer(GL_ARRAY_BUFFER,VBO);
    //vertex buffer'a nokta bilgileri ytollanıyor
    glBufferData(GL_ARRAY_BUFFER,sizeof(vertices),vertices,GL_STATIC_DRAW);
    //gönderilen vertex'e ait özellikler etiketleniyor
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    //özellik  etiket i aktif ediliyor.
    glEnableVertexAttribArray(0); 

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.5f, 0.4f, 0.7f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        program.use();

        glBindVertexArray(VAO);
        glEnableVertexAttribArray(0);

        glDrawArrays(GL_TRIANGLES, 0, 3);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0;
}