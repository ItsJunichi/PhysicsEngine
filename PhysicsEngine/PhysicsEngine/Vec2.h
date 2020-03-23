#pragma once
class Vec2
{
public:
	float x;
	float y;

	Vec2();
	~Vec2();
	Vec2(float PosX, float PosY);

	//TODO: 
	//Vec2 Operators

	Vec2 operator+(const Vec2& smh) const {
		return Vec2(this->x + smh.x, this->y + smh.y);
	}

	Vec2 operator-(const Vec2 &smh) const {
		return Vec2(this->x - smh.x, this->y - smh.y);
	}

	Vec2 operator*(const Vec2& smh) const {
		return Vec2(this->x * smh.x, this->y * smh.y);
	}

	Vec2 operator/(const Vec2& smh) const {
		return Vec2(this->x / smh.x, this->y / smh.y);
	}
	
};

