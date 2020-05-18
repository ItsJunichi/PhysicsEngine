#include "Box.h"


Box::Box(RigidbodyComponent* rigidbody, Vec2 size)
{
	rigid = rigidbody;
	box.size = size;
}

Box::~Box()
{
}

void Box::BoxPosition()
{
	box.TL = Vec2(rigid->position.x - box.size.x / 2, rigid->position.y - box.size.y / 2);
	box.TR = Vec2(rigid->position.x - box.size.x / 2, rigid->position.y - box.size.y / 2);
	box.BL = Vec2(rigid->position.x - box.size.x / 2, rigid->position.y - box.size.y / 2);
	box.BR = Vec2(rigid->position.x - box.size.x / 2, rigid->position.y - box.size.y / 2);
	//Here add updates for top and bottom edges
}

void Box::BoxRotation()
{
	float sinf = sin(rigid->orientation);
	float cosf = sin(rigid->orientation);
}

void Box::BoxInertia()
{
	rigid->inertia = rigid->mass * (box.size.x * box.size.x + box.size.y * box.size.y) / 12;
}
