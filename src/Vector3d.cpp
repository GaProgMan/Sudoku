#include "Vector3d.h"

/********************************************************************
 * Constructors and de-constructors
 ********************************************************************/

// Default constructor
Vector3d::Vector3d(void)
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

// Copy constructor
Vector3d::Vector3d(const Vector3d& other)
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
}

// Overloaded constructor
Vector3d::Vector3d(int inX, int inY, int inZ)
{
    this->x = inX;
    this->y = inY;
    this->z = inZ;
}

// Default de-constructor
Vector3d::~Vector3d()
{
}

/********************************************************************
 * Accessors and mutators
 ********************************************************************/
int Vector3d::xValue() const
{
    return this->x;
}

int Vector3d::yValue() const
{
    return this->y;
}

int Vector3d::zValue() const
{
    return this->z;
}

void Vector3d::xValue(int inValue)
{
    this->x = inValue;
}

void Vector3d::yValue(int inValue)
{
    this->y = inValue;
}

void Vector3d::zValue(int inValue)
{
    this->z = inValue;
}

bool Vector3d::contains(int inValue)
{
    if(this->x == inValue || this->y == inValue || this->z == inValue)
        return true;
    else
        return false;
}
