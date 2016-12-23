#include "Block.h"



Block::Block(char image)
{
	symbol_ = image;
}


Block::~Block()
{
}

char Block::image()
{
	return symbol_;
}
