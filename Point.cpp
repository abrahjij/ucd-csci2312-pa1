//
// Created by Jijo on 2/7/2016.
//
//103289057


#include <cstdio>
#include <cmath>
#include "Point.h"

// Constructors
Point::Point()
{
    x = 0;
    y = 0;
    z = 0;
}

Point::Point(double X, double Y, double Z)
{
    x = X;
    y = Y;
    z = Z;
}

// Mutator methods
void Point::setX(double newX)
{
    x = newX;
}

void Point::setY(double newY)
{
    y =newY;
}

void Point::setZ(double newZ)
{
    z = newZ;
}

// Accessor methods
double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

double Point::getZ() const
{
    return z;
}


// Non-member funtions
double Point::distanceTo(const Point &other) const
{
    //Formula::d^2 = (x1 - x0)^2+ (y1 - y0)^2
    return sqrt(pow(x-other.getX(), 2) + pow(y-other.getY(), 2) + pow(z-other.getZ(), 2));
}