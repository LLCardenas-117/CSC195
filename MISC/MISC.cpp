// MISC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include <iostream>
#include <vector>

using names_t = std::vector<std::string>;

namespace math {
    template <typename T1, typename T2>

    T1 max(T1 a, T2 b) {
        return (a > b) ? a : b;
    }
}

// Adds a pointer to the vector, this way you can save on memory by not creating a duplicate of the vector
void print(const names_t& names) {
    for (std::string name : names) {
        std::cout << name << std::endl;
    }
}


int main()
{
    cordMath::ipoint p1(23, 10);
    cordMath::ipoint p2(12, 34);
    cordMath::ipoint p3;
    cordMath::ipoint p4;
    p3 = p1 + p2;
    p4 = p1 - p2;
    //std::cout << p1.Add(p2) << std::endl;
    std::cout << p3.GetX() << ", " << p3.GetY() << std::endl;
    std::cout << p4.GetX() << ", " << p4.GetY() << std::endl;

    std::cout << p3;
    std::cout << p4;

    /*std::cout << std::max(6, 10) << std::endl;
    std::cout << math::max(6, 10) << std::endl;
    std::cout << math::max(12.0f, 2.5f) << std::endl;
    std::cout << math::max(12, 18.4f) << std::endl;
    std::cout << math::max(12.3f, 12.4f) << std::endl;
    std::cout << math::max(12.3f, 12.2f) << std::endl;*/

    /*names_t names{ "Landon", "Liliya", "Ace", "Link" };
    print(names);*/
}
