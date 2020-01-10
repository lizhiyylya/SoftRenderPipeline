#ifndef _SHADER_H_
#define _SHADER_H_

namespace SRL {
	class  Shader
	{
	public:
		Shader();
		virtual ~Shader();
		virtual void setModelMatrix();
		virtual void setViewMatrix();
		virtual void setProjMatrix();
		virtual void vertexShader();
		virtual void fragmentShader();
	private:


	};
}
#endif // _SHADER_H_




