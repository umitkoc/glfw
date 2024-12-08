#ifndef SHADERPROGRAM_HPP
#define SHADERPROGRAM_HPP
#include <string>
class ShadersProgram
{
private:
    unsigned int programId;

    std::string getShaderFromFile(const char *filename);

public:
    ShadersProgram();
    ~ShadersProgram();
    void attachShader(const char *filename, unsigned int shaderType);

    void link();

    void use();
};

#endif