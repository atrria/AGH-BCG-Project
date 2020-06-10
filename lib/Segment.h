#pragma once

struct Point
{
    double mX, mY, mZ;
    Point(double x = 0., double y = 0., double z = 0.) : mX(x), mY(y), mZ(z) {}
    Point& operator=(const Point& other)
    {
        mX = other.mX;
        mY = other.mY;
        mZ = other.mZ;
        return *this;
    }
    void operator()(double x, double y, double z) { mX = x; mY = y; mZ = z; }
};

struct Segment 
{
    Point mA, mB, mC;
    Segment() : mA(), mB(), mC() {}
    Segment(Point A, Point B, Point C) : mA(A), mB(B), mC(C) {}
    double sumZ() const
    {
        return mA.mZ + mB.mZ + mC.mZ;
    }
};
