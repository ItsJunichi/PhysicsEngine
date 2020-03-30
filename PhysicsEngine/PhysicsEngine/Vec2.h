#pragma once
class Vec2
{
public:
	float x;
	float y;

	Vec2();
	~Vec2();
	Vec2(float PosX, float PosY);

	Vec2 operator+(const Vec2& smh);

	Vec2 operator-(const Vec2& smh);

	Vec2 operator*(const Vec2& smh);

	Vec2 operator/(const Vec2& smh);
		
	
};

