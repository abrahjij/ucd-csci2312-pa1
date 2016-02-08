//
// Created by Jijo on 2/6/2016.
//
//103289057


#include <cmath>
#include <stdio.h>
#include "Point.h"


double computeArea(const Point &a, const Point &b, const Point &c)
{
    double AB = a.distanceTo(b);
    double BC = b.distanceTo(c);
    double CA = c.distanceTo(a);

    // Semiperimeter of Heron's Formula
    double s = (AB + BC + CA) / 2;

    // Heron's Formula
    return sqrt(s * (s - AB) * (s - BC) * (s - CA));
}