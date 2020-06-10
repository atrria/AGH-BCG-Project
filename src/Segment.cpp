#include "Segment.h"

Point& Point::operator=(const Point& other)
{
    mX = other.mX;
    mY = other.mY;
    mZ = other.mZ;

    return *this;

}
