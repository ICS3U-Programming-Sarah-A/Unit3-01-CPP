// Copyright (c) 2022 Sarah HS All rights reserved.
//
// Created by: Sarah
// Created on: Mar, 25, 2022
// This program calculates total from subtotal and tax

#include <iostream>
#include <iomanip>

int main() {
    // declare variables
    const float HST = 0.15;
    float tax;
    float subTotal;
    float total;

    // get subtotal
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // calculate tax & total cost
    tax = + subTotal * HST;
    total = subTotal + tax;

    // display results to user, tax and the total cost
    std::cout << "" << std::endl;
    std::cout << "The HST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total cost is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
