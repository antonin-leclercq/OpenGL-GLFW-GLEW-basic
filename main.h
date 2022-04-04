#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "shaders.h"

const int width = 800, height = 600;

const char* vertex_filenames[] = {
	"/home/antoninleclercq/Desktop/opengl-glew/vertex_shader.vert"
};

const char* fragment_filenames[] = {
	"/home/antoninleclercq/Desktop/opengl-glew/fragment_shader.frag"
};

void framebuffer_size_callback(GLFWwindow* window, int width, int height);

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

#endif