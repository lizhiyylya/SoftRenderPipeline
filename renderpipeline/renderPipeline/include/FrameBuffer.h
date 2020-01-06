#ifndef _FRAME_BUFFER_H_
#define _FRAME_BUFFER_H_

#include <vector>
#include "glm.hpp"

namespace SRL {
	class  FrameBuffer
	{
	public:
		FrameBuffer();
		FrameBuffer(const int& w = 960, const int& h = 540);
		~FrameBuffer();
		void clearColor(const glm::u8vec4& color);
		void set(const int& x, const int& y, const glm::u8vec4& color);
		void clear();
	private:
		int width;
		int height;
		std::vector<unsigned char> data;
	};
}
#endif // _FRAME_BUFFER_H_




