#include "FrameBuffer.h"

using namespace SRL;
//----------------------------
FrameBuffer::FrameBuffer()
	:width(960)
	,height(540)
{
	data.reserve(width * height * 4);
}
//-----------------------------
FrameBuffer::~FrameBuffer()
{
}
//-----------------------------
FrameBuffer::FrameBuffer(const int& w, const int& h) 
	:width(w)
	,height(h)
{
	data.reserve(w * h * 4);
}
//-----------------------------
void FrameBuffer::clearColor(const glm::u8vec4& color)
{
	for (size_t i = 0; i < data.size(); i += 4) {
		data[i] = color.r;
		data[i + 1] = color.g;
		data[i + 2] = color.b;
		data[i + 3] = color.a;
	}
}
//-----------------------------
void FrameBuffer::set(const int& x, const int& y, const glm::u8vec4& color)
{
	int loc = (x * width + y) * 4;
	if (loc > width * height) {
		return;
	}
	data[loc] = color.r;
	data[loc + 1] = color.g;
	data[loc + 2] = color.b;
	data[loc + 3] = color.a;
}
//-----------------------------
void FrameBuffer::clear()
{

}
//-----------------------------