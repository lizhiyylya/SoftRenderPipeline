#ifndef _PROGRAM_H_
#define _PROGRAM_H_

#include "Shader.h"
#include "glm.hpp"

namespace SRL {
	class Program {
	public:
		Program();
		~Program();
		void attachShader(const Shader& shader);
		void setModelMatrix(glm::mat4x4 mat) { modelMat = mat; }
		void setViewMatrix(glm::mat4x4 mat) { viewMat = mat; }
		void setProjMatrix(glm::mat4x4 mat) { projMat = mat; }
	private:
		Shader mShader;
		glm::mat4x4 modelMat;
		glm::mat4x4 viewMat;
		glm::mat4x4 projMat;
		void attachVertexShader();
		void attachFragmentShader();
	};
}
#endif //_PROGRAM_H_
