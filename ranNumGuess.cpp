// Copyright (c) 2026 Bryson G All rights reserved.
// .
// Created by: Bryson G
// Date: 10,18,2026
// This program creates a game for
// the user to guess a randomly generated number,
// from 1 - 100

#include <iostream>
#include <random>

int main() {
    int someRandomNumber;
    int guessedNumber;

    // Generate random number

    std::random_device rseed;
    // mersenne_twister

    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 100);  // [1,100]
    someRandomNumber = idist(rgen);

    // Get guessed number from the user

    std::cout << "Enter your guessed number (1 - 100): ";
    std::cin >> guessedNumber;


    // Check if the user is correct or not

    if (guessedNumber == someRandomNumber) {
        std::cout << "You guessed correct!";
    }
    if (guessedNumber != someRandomNumber) {
        std::cout << "You guessed wrong!";
        std::cout << "The correct answer was " << someRandomNumber;
    }
}
