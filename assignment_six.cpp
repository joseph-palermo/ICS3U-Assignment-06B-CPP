// Copyright (c) 2019 Joseph Palermo All rights reserved.

// Created by: Joseph Palermo
// Created on: November 2019
// This program calculates the volume of an icosahedron

#include <iostream>
#include <cmath>
#include <iomanip>

void volume() {
    // this function calculates the volume of an icosahedron

    // input & variables
    float icosahedronSideLength;
    std::string sideLengthString;
    float icosahedronVolume;

    std::cout << "Enter side length of the icosahedron: ";
    std::cin >> sideLengthString;

    // process
    try {
        icosahedronSideLength = std::stof(sideLengthString);
        icosahedronVolume = (5*(3+sqrt(5))/12)*pow(icosahedronSideLength, 3);

    // output
    std::cout << "\n";
    std::cout << "The volume of the icosahedron is " \
            << std::fixed << std::setprecision(2) \
            << icosahedronVolume << std::setfill('0');
            std::cout << " units";
    } catch (std::invalid_argument) {
        std::cout << "\n";
        std::cout << "Please insert a valid number.";
    }
}


int main() {
    // this function calls other functions

    // call function
    volume();
}
