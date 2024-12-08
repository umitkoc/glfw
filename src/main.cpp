#include <iostream>
#include <glm/mat4x4.hpp>
#include <glad/gl.h>
#include <GLFW/glfw3.h>

char *vssource =
    "#version 330 core\n                                    \
 layout (location = 0) in vec3 inPosition;              \
 void main()                                            \    
 {                                                      \
    gl_Position = vec4(inPosition, 1.0);                \
 }";
char *fssource =
    "#version 330 core\n                                    \
 out vec4 fragColor;                                    \
 void main()                                            \    
 {                                                      \
    fragColor = vec4(1.0f, 0.0f, 0.0f, 1.0f);           \
 }";

float vertices[] = {
    -0.6f, -0.1f, 0.0f,
    0.5f, -0.5f, 0.0f,
    0.0f, 0.5f, 0.8f};
auto main() -> int
{
    unsigned int programId;
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
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Glad not working" << std::endl;
        return -1;
    }

    programId = glCreateProgram();

    // for shader
    unsigned int vertexShaderId = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShaderId, 1, &vssource, NULL);
    glCompileShader(vertexShaderId);

    // for fragment
    unsigned int fragmentShaderId = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShaderId, 1, &fssource, NULL);
    glCompileShader(fragmentShaderId);

    // attack
    glAttachShader(programId, vertexShaderId);
    glAttachShader(programId, fragmentShaderId);

    // link to id
    glLinkProgram(programId);

    unsigned int VBO;
    unsigned int VAO;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBindVertexArray(VAO);

    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 3, (void *)0);
    glEnableVertexAttribArray(0);

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.0f, 0.4f, 0.7f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(programId);

        glBindVertexArray(VAO);
        glEnableVertexAttribArray(0);

        glDrawArrays(GL_TRIANGLES,0,3);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0;
}