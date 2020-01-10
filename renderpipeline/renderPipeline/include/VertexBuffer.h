#ifndef _VERTEX_BUFFER_H_
#define _VERTEX_BUFFER_H_

#include "glm.hpp"
#include <vector>

namespace SRL {
	using glm::vec3;
	class VertexBuffer {
	public:
		VertexBuffer();
		~VertexBuffer();
		void addVertex(const glm::vec3& vertex);
		void addVertex(const std::vector<glm::vec3>& vertex);
	private:
		std::vector<glm::vec3> mVertex;
	};
}
#endif //_VERTEX_BUFFER_H_
