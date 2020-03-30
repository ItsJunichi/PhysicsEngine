#include "Vec2.h"
#include <cmath>

Vec2::Vec2(float PosX, float PosY){

	x = PosX;
	y = PosY;

}

Vec2 Vec2::operator+(const Vec2& smh)
{
	return Vec2(this->x + smh.x, this->y + smh.y);
}

Vec2 Vec2::operator-(const Vec2& smh)
{
	return Vec2(this->x - smh.x, this->y - smh.y);
}

Vec2 Vec2::operator*(const Vec2& smh)
{
	return Vec2(this->x * smh.x, this->y * smh.y);
}

Vec2 Vec2::operator/(const Vec2& smh)
{
	return Vec2(this->x / smh.x, this->y / smh.y);
}

Vec2::Vec2() {
	x = 0.0f;
	y = 0.0f;
}

Vec2::~Vec2()
{
}
