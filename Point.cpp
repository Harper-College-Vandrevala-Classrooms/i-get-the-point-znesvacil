//
//  Point.cpp
//  I Get the Point
//
//  Created by Zachary Nesvacil on 11/10/24.
//

#include "Point.hpp"

Point::Point(float x, float y)
{
    x_value = x;
    y_value = y;
}

float Point::operator-(const Point& p)
{
    float distance;
    distance = sqrt(pow((p.x_value - x_value), 2) + pow((p.y_value - y_value), 2));
    return distance;
}

bool Point::operator==(const Point& p)
{
    if (p.x_value == x_value && p.y_value == y_value) {
        return true;
    }
    else {
        return false;
    }
}

bool Point::operator!=(const Point& p)
{
    if (p.x_value != x_value || p.y_value != y_value) {
        return true;
    }
    else {
        return false;
    }
}

Point Point::operator/(Point const & p)
{
    Point midpoint(0, 0);
    midpoint.x_value = (x_value + p.x_value)/2;
    midpoint.y_value = (y_value + p.y_value)/2;
    return midpoint;
}

void Point::print()
{
    cout << "(" << x_value << ", " << y_value << ")" << endl;
}
