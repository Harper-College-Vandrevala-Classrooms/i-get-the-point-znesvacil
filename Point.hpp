//
//  Point.hpp
//  I Get the Point
//
//  Created by Zachary Nesvacil on 11/10/24.
//
#pragma once
#ifndef Point_hpp
#define Point_hpp
#endif

#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    float x_value;
    float y_value;
public:
    Point(float x, float y);
    float operator-(const Point& p);
    bool operator==(const Point& p);
    bool operator!=(const Point& p);
    Point operator/(const Point& p);
    void print();
};
