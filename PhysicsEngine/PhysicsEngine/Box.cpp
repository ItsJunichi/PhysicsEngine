#include "Box.h"


Box::Box(RigidbodyComponent* rigidbody, Vec2 size)
{
	rigid = rigidbody;
	box.size = size;
}

Box::~Box()
{
}
