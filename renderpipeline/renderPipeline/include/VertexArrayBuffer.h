#ifndef _VERTEX_ARRAY_BUFFER_H_
#define _VERTEX_ARRAY_BUFFER_H_

#include "VertexBuffer.h"
#include<memory>

namespace SRL {
	class VertexArrayBuffer {
	public:
		VertexArrayBuffer();
		~VertexArrayBuffer();
		void addVertexBuffer(std::shared_ptr<VertexBuffer> buffer);
	private:
		std::vector<std::shared_ptr<VertexBuffer>> mVertexBufferArray;
	};
}
#endif //_VERTEX_ARRAY_BUFFER_H_
