#include "GameEngine.h"

#include <windows.h>
#include <iostream>

int main() {
	GameEngine GameEngine;
	while (true)
	{
		std::cout << GameEngine.draw();
		getchar();
		GameEngine.moveCamera(1, 0);
		
	}
}