// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program adds two integers

#include <cmath>
#include <iostream>

int main() {
    // this function adds two integers
    int firstInteger;
    int secondInteger;
    int sumOfIntegers;

    // input
    std::cout << "Enter first integer: ";
    std::cin >> firstInteger;

    std::cout << "Enter second integer: ";
    std::cin >> secondInteger;

    // process
    sumOfIntegers = firstInteger + secondInteger;

    // output
    std::cout << "" << std::endl;
    std::cout << "The sum of both integers is " << sumOfIntegers;

    std::cout << "\nDone." << std::endl;
}
