#include "RigidbodyComponent.h"

RigidbodyComponent::RigidbodyComponent(Vec2 vel, Vec2 pos, float a, Vec2 f, float g, float m, float r, float ori, float ine)
{
	position = pos;
	velocity = vel;
	accel = a;
	force = Vec2(0, 0);
	grav = g;
	mass = m;
	res = r;
	orientation = ori;
	inertia = ine;
}
