#include "VertexBuffer.h"

using namespace SRL;
//----------------------------------
VertexBuffer::VertexBuffer()
{

}
//----------------------------------
VertexBuffer::~VertexBuffer()
{
	mVertex.clear();
}
//----------------------------------
void VertexBuffer::addVertex(const glm::vec3& vertex)
{
	mVertex.push_back(vertex);
}
//----------------------------------
void VertexBuffer::addVertex(const std::vector<glm::vec3>& vertex)
{
	mVertex.assign(vertex.begin(), vertex.end());
}
//----------------------------------



