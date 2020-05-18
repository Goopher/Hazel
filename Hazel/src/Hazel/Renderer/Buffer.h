#pragma once

namespace Hazel {
	
	class VertexBuffer
	{
	public:
		virtual ~VertexBuffer() {}

		virtual void Bind() = 0; 
	};

	class IndexBuffer
	{
	public:
		virtual ~IndexBuffer() {}
	};
}