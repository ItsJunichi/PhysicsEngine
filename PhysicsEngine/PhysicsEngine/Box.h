#pragma once
#include "Vec2.h"
#include "RigidbodyComponent.h"
#include <SDL.h>

struct BOX
{
	Vec2 size;
};

class Box
{
private:
	BOX box;

public:
	Box(RigidbodyComponent* rigid, Vec2 size);
	~Box();
	RigidbodyComponent* rigid;
};

