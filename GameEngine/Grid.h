#include "Block.h"

#include <vector>
#include <memory>

class Grid
{
public:
	Grid(int x, int y);
	~Grid();
	std::shared_ptr<Block> block(int coord_x, int coord_y);
	int width();
	int height();
private:
	std::vector<std::vector<std::shared_ptr<Block>>> grid_;
};

