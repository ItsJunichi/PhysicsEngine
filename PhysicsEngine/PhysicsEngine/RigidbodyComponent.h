#pragma once
#include "Vec2.h"
class RigidbodyComponent
{
public:
	Vec2 velocity;
	Vec2 position;
	float accel;
	Vec2 force;
	float grav;
	float mass;
	float res;
	float orientation;
	float inertia;
	RigidbodyComponent(Vec2 vel,
		Vec2 pos,
		float a,
		Vec2 f,
		float g,
		float m,
		float r,
		float ori,
		float ine);
};

