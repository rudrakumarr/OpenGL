#pragma once

#include "Renderer.h"

class Texture
{
private:
	unsigned int m_RendererID;
	std::string m_FilePath;
	unsigned char* m_LocalBuffer;
	int m_Width, m_Height, m_BPP;
	std::string m_Sides[6] = {
		 "right.png",
		  "left.png",
		   "top.png",
		"bottom.png",
		  "back.png",
		 "front.png"
	};
public:
	// does it contain a diffuse or specular texture;
	std::string m_Type;
public:
	Texture(const std::string& path, const std::string& type = "Normal");
	~Texture();

	void Bind(unsigned int slot = 0) const;
	void Unbind() const; 

	inline int GetWidth() const { return m_Width; }
	inline int GetHeight() const { return m_Height; }
};

