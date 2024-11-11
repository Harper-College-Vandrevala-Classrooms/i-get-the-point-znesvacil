//
//  main.cpp
//  I Get the Point
//
//  Created by Zachary Nesvacil on 11/10/24.
//
#include "Point.hpp"
#include <iostream>

using namespace std;

Point p1(3.2, 9.8);
Point p2(5.5, -1.2);

int main() {
    cout << p1 - p2 << endl;
    
    if (p1 == p2) {
        cout << "The points are the same." << endl;
    }
    else {
        cout << "The points are not the same." << endl;
    }
 
    if (p1 != p2) {
        cout << "The points are different." << endl;
    }
    else {
        cout << "The points are not different." << endl;
    }
    
    Point p3 = (p1/p2);
    
    p3.print();
    
    return 0;
}
