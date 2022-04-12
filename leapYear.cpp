// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program checks if a year is a leap year

#include <iostream>
#include <string>

int main() {
    // This function checks if a year is a leap year

    int year;
    std::string yearAsString;

    // Input
    std::cout << "Enter the year: ";
    std::cin >> yearAsString;

    // Process & Output
    try {
        year = std::stoi(yearAsString);
        if (year % 4 != 0) {
            std::cout << year << " is not a leap year." << std::endl;
        } else if (year % 100 == 0 && year % 400 != 0) {
            std::cout << year << " is not a leap year." << std::endl;
        } else {
            std::cout << year << " is a leap year." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << yearAsString << " is not a year." << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
