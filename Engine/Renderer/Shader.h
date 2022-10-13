#pragma once
#include "Resource/Resource.h"
#include "Renderer/Renderer.h"
namespace neu {
	class Shader : public Resource
	{
	public:
		~Shader();

		virtual bool Create(std::string name, ...);
	public:
		GLuint m_shader = 0;
	};


}