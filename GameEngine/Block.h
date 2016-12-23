#include <vector>
#include <memory>

class Block
{
public:
	Block(char image);
	~Block();
	char image();
private:
	char symbol_;
};

