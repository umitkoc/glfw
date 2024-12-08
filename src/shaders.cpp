#include "shaders.hpp"
#include <glad/gl.h>
#include <fstream>
#include <iostream>

ShadersProgram::ShadersProgram(){
    programId=glCreateProgram();
}

ShadersProgram::~ShadersProgram(){
    glDeleteProgram(programId);
}


void ShadersProgram::link(){
    glLinkProgram(programId);
}

void ShadersProgram::use(){
    glUseProgram(programId);
}


void ShadersProgram::attachShader(const char * filename,unsigned int shaderType){
    unsigned int shaderId=glCreateShader(shaderType);
    std::string sourceCode=getShaderFromFile(filename);
    const char * chSourceCode=&sourceCode[0];
    glShaderSource(shaderId,1,&chSourceCode,NULL);
    glCompileShader(shaderId);
    glAttachShader(programId,shaderId);
    glDeleteShader(shaderId);
}

std::string ShadersProgram::getShaderFromFile(const char * filename){

    std::ifstream file(filename);

    std:: string data;

    if(file.is_open()){
        char readChar;

        while((readChar==file.get())!=EOF){
            data+=readChar;
        }
        file.close();
    }
    return data;
}