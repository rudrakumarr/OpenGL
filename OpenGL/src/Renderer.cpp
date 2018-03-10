#include "Renderer.h"
#include <iostream>


/* Clear all the errors */
void GLClearError()
{
	while (glGetError() != GL_NO_ERROR);
}

/* Print the errors */
bool GLLogCall(const char* function, const char* file, int line)
{
	while (GLenum error = glGetError())
	{
		std::cout << "[OpenGL Error]: " << std::hex << error << std::dec << ": " << function << " " << file << ": " << line << std::endl;
		return false;
	}
	return true;
}