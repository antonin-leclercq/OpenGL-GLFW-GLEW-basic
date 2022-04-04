#ifndef SHADERS_H
#define SHADERS_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
  

class Shader
{
public:
    // constructor reads and builds the shader
    Shader(const char* vertexPath, const char* fragmentPath);
    ~Shader() = default;
public:
    // use/activate the shader
    void use(void) const;
    // utility uniform functions
    void setBool(const std::string &name, bool value) const;  
    void setInt(const std::string &name, int value) const;   
    void setFloat(const std::string &name, float value) const;
public:
	// the program ID
    unsigned int ID;
};

#endif