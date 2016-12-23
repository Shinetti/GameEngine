#include <vector>

class Camera
{
public:
	Camera();
	~Camera();
	std::vector<int> position();
	std::vector<int> zoom();
	void move(int x_coord, int y_coord);
private:
	std::vector<int> position_;
	std::vector<int> zoom_;
};

