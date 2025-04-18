#pragma once

#include <iostream>
#include <limits>
int getValidatedInt();
float getValidatedFloat(); 

template<typename T>
// Function that safely reads an int from cin with validation
T getValidatedData() {
    T x;
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