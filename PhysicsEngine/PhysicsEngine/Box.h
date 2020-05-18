#pragma once
#include "Vec2.h"
#include "RigidbodyComponent.h"
#include <SDL.h>

// Struct for all corners of a box
struct BOX
{
	Vec2 TL;
	Vec2 TR;

	Vec2 BL;
	Vec2 BR;

	Vec2 size;

	Vec2 Top;
	Vec2 Bottom;
};

class Box
{
private:
	BOX box;

public:
	Box(RigidbodyComponent* rigid, Vec2 size);
	~Box();
	RigidbodyComponent* rigid;
	BOX GetBox() { return box; }

	void BoxPosition();
	void BoxRotation();
	void BoxInertia();
};

