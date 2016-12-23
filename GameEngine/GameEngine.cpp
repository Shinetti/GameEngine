#include "GameEngine.h"

GameEngine::GameEngine():grid_(200,200), camera_()
{
}


GameEngine::~GameEngine()
{
}

std::string GameEngine::draw()
{
	std::string picture("");
	int x = camera_.position().at(0);
	int y = camera_.position().at(1);
	for (int y_iter = 0; y_iter < camera_.zoom().at(1); y_iter++)
	{
		for (int x_iter = 0; x_iter < camera_.zoom().at(0); x_iter++)
		{
			//if on the grid
			if (x + x_iter < grid_.width())
			{
				char image = grid_.block(x + x_iter, y + y_iter)->image();
				picture.push_back(image);
			}
			//else we are off the grid
			else
			{
				picture.push_back(' ');
			}
			
		}
		picture.push_back('\n');
	}
	return picture;
}

void GameEngine::moveCamera(int x_coord, int y_coord)
{
	camera_.move(x_coord, y_coord);
	return;
}
