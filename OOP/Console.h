#pragma once

#include <iostream>
#include <limits>

int getInt();
float getFloat();

template<typename T> 
T getData() {
    T x;

    //std::cout << std::numeric_limits<float>::max() << std::endl;

    while (true) {
        std::cin >> x;

        if (std::cin.fail()) {
            std::cin.clear(); // clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input. Please enter a valid number.\n";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush any extra input
            return x;
        }
    }
}