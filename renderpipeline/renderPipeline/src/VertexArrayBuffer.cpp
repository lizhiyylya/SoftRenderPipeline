#include "VertexArrayBuffer.h"

using namespace SRL;

//--------------------------------------
VertexArrayBuffer::VertexArrayBuffer()
{

}
//--------------------------------------
VertexArrayBuffer::~VertexArrayBuffer() 
{
	mVertexBufferArray.clear();
}
//--------------------------------------
void VertexArrayBuffer::addVertexBuffer(std::shared_ptr<VertexBuffer> buffer)
{
	mVertexBufferArray.push_back(buffer);
}
//--------------------------------------