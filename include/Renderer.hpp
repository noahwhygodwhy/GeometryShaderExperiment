#pragma once
#ifndef RENDERER_H
#define RENDERER_H

#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "glm/glm.hpp"
// #include "Shader.hpp"
// #include "Camera.hpp"
#include <map>
#include <string>
#include <vector>
// #include "World.hpp"
// #include "Config.h"

#include "stb_image.h"

using namespace std;


class Renderer
{
	// unsigned int largeTextureStack = 0; ///<The pointer to the Large Texture Stack^tm texture
	// unsigned int foliageColorMap = 0;///<The pointer to the foliage color map texture
	int screenX;///<The width of the screen in pixels
	int screenY;///<The height of the screen in pixels
	// Camera cam;///<The "Camera" allowing for a more comfortable way of controlling the view matrix.
	// Shader shader;///<The shader object that controls the opengl shaders.
	GLFWwindow* window;///<The opengl context

public:

	Renderer(int screenX, int screenY);
	~Renderer();
	GLFWwindow* initializeOpenGL();
    void run();

};




#endif
