#include "Camera.h"
#include "Grid.h"

#include <vector>
#include <string>

class GameEngine
{
public:
	GameEngine();
	~GameEngine();
	std::string draw();
	void moveCamera(int x_coord, int y_coord);

private:
	Camera camera_;
	Grid grid_;
};

#pragma once
