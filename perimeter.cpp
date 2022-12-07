// Copyright (c) 2022 Joanne Santhosh All rights reserved

// Created by: Joanne Santhosh
// Created on: Dec 2022
// This program finds the perimeter of a square

#include <cmath>
#include <iostream>
#include <string>

float PerimeterOfSquare(int side) {
    // Calculates a square's perimeter

    float perimeter;

    if (side < 0) {
        return -1;
    } else {
        perimeter = 4 * side;
        return perimeter;
    }
}

int main() {
    // Gets input and calls to calculate the perimeter

    int sideInteger;
    float squarePerimeter;
    std::string sideText;

    try {
        std::cout << "Enter side of a square (cm): ";
        std::cin >> sideText;
        sideInteger = stoi(sideText);
        squarePerimeter = PerimeterOfSquare(sideInteger);
        std::cout << std::endl;
        std::cout << "This square's perimeter is "
                  << squarePerimeter << " cm";
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
