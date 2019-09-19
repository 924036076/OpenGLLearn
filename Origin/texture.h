#pragma once
#include <windows.h>
#include <gl/GL.h>

class Texture 
{
public: 
	GLuint mTextureID;
	void Init(const char* imagePath);
};