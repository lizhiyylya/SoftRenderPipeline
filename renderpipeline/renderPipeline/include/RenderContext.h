#ifndef _RENDER_CONTEXT_H_
#define _RENDER_CONTEXT_H_

namespace SRL {
	class RenderContext {
	public:
		RenderContext();
		~RenderContext();
		void bindBufffer();
		void unbindBuffer();
		void bindTexture();
		void unbindTexture();
		void createProgram();
		void attachProgram();
		void draw();
	};
}
#endif //_RENDER_CONTEXT_H_
