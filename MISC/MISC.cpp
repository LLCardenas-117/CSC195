// MISC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#define NAME "Landon"
#define PI 3.14159265358979f
#define DEBUG

#define XBOX
//#define PS
//#define SWITCH

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

template<typename T>
void StreamOut(std::ostream& ostream, const T& value) {
    ostream << value << std::endl;
}

void StreamIn(std::istream& istream, std::string& text) {
    std::getline(istream, text);
    //istream >> text;
}

int g = 5;

int main()
{
#ifdef _DEBUG
    std::cout << "program start\n";
#endif

#ifdef XBOX
    //XBOX code here
    std::cout << "Dis an Xbox\n";
#endif

#ifdef PS
    //PS code here
    std::cout << "Dis an Playstation\n";
#endif

#ifdef SWITCH
    //SWITCH code here
    std::cout << "Dis an Switch\n";
#endif

    cordMath::ipoint p(4, 5);
    std::cin >> p;

    StreamOut(std::cerr, NAME);

    std::cout << PI << std::endl;

    std::ofstream fstream("text.txt");
    StreamOut(fstream, "Hello");
    StreamOut(fstream, 5);
    StreamOut(fstream, 34.5f);
    StreamOut(fstream, p);
    fstream.close();
    
    std::string text;
    std::ifstream ifstream("text.txt");

    if (ifstream.is_open()) {
        while (std::getline(ifstream, text)) {
            std::cout << text << std::endl;
        }
    }
    ifstream.close();

    //StreamIn(std::cin, text);
    //std::cout << text << std::endl;


    //cordMath::ipoint p1(23, 10);
    //cordMath::ipoint p2(12, 34);
    //cordMath::ipoint p3;
    //cordMath::ipoint p4;
    //p3 = p1 + p2;
    //p4 = p1 - p2;
    ////std::cout << p1.Add(p2) << std::endl;
    //std::cout << p3.GetX() << ", " << p3.GetY() << std::endl;
    //std::cout << p4.GetX() << ", " << p4.GetY() << std::endl;

    //std::cout << p3;
    //std::cout << p4;

    /*std::cout << std::max(6, 10) << std::endl;
    std::cout << math::max(6, 10) << std::endl;
    std::cout << math::max(12.0f, 2.5f) << std::endl;
    std::cout << math::max(12, 18.4f) << std::endl;
    std::cout << math::max(12.3f, 12.4f) << std::endl;
    std::cout << math::max(12.3f, 12.2f) << std::endl;*/

    /*names_t names{ "Landon", "Liliya", "Ace", "Link" };
    print(names);*/
}
