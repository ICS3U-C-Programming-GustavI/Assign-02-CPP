// Copyright (c) 2025 Gustav I All rights reserved.
// Created by: Gustav I
// Created on: March 7, 2025
// This program calculates the volume and surface area of a cone.

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // Input for radius and height of a cone
    std::cout << "Welcome to the Cone Surface Area and Volume calculator. Please insert your desired values.\n";

    std::string radiusInput, heightInput;
    std::cout << "Enter the radius of the cone: ";
    std::cin >> radiusInput;
    std::cout << "Enter the height of the cone: ";
    std::cin >> heightInput;

    // Error checking (ensures input is a number, not negative and not a word)
    for (char c : radiusInput) {
        if (!isdigit(c) && c != '.') {
            std::cout << "\nError: Please enter a valid positive number for radius.\n";
            return 1;
        }
    }
    for (char c : heightInput) {
        if (!isdigit(c) && c != '.') {
            std::cout << "\nError: Please enter a valid positive number for height.\n";
            return 1;
        }
    }

    float radius = std::stof(radiusInput);
    float height = std::stof(heightInput);

    if (radius <= 0 || height <= 0) {
        std::cout << "\nError: Radius and height must be greater than zero.\n";
        return 1;
    }

    std::string unit;
    std::cout << "Enter the unit of measurement (e.g., cm, m, inches): ";
    std::cin >> unit;

    // Process: Calculate the volume and **corrected** surface area
    const float PI = 3.14159265359;
    float volume = (1.0 / 3.0) * PI * (radius * radius) * height;
    float surfaceArea = PI * radius * (radius + sqrt((height * height) + (radius * radius)));

    // Output
    std::cout << "\n--- Cone Measurements ---\n";
    std::cout << "Volume: " << std::fixed << std::setprecision(2) << volume << " " << unit << "³\n";
    std::cout << "Surface Area: " << std::fixed << std::setprecision(2) << surfaceArea << " " << unit << "²\n";

    return 0;
}
