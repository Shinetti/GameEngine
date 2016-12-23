#include "Camera.h"

Camera::Camera()
{
	position_.push_back(0);
	position_.push_back(0);
	zoom_.push_back(75);
	zoom_.push_back(24);
}


Camera::~Camera()
{
}

std::vector<int> Camera::position()
{
	return position_;
}

std::vector<int> Camera::zoom()
{
	return zoom_;
}

void Camera::move(int x_coord, int y_coord)
{
	position_.at(0) += x_coord;
	position_.at(1) += y_coord;
}