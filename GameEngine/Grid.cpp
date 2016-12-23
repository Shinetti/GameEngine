#include "Grid.h"

Grid::Grid(int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		std::vector<std::shared_ptr<Block>> block_vector;
		for(int j = 0; j < y; j++)
		{
			if (i < 30) {
				std::shared_ptr<Block> new_block_ptr = std::make_shared<Block>(Block('@'));
				block_vector.push_back(new_block_ptr);
			}
			else if (i < 60)
			{
				std::shared_ptr<Block> new_block_ptr = std::make_shared<Block>(Block('B'));
				block_vector.push_back(new_block_ptr);
			}
			else 
			{
				std::shared_ptr<Block> new_block_ptr = std::make_shared<Block>(Block('H'));
				block_vector.push_back(new_block_ptr);
			}
			
			
		}
		grid_.push_back(block_vector);
	}
}


Grid::~Grid()
{
}

std::shared_ptr<Block> Grid::block(int coord_x, int coord_y)
{
	return grid_[coord_x][coord_y];
}

int Grid::width()
{
	return grid_.size();
}

int Grid::height()
{
	return grid_[0].size();
}
