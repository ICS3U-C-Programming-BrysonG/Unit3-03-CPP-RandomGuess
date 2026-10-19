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
    std::random_device rseed;
    std::mt19937 rgen(rseed()); //mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100); // [1,100]
    someRandomNumber = idist(rgen);
    std::cout << someRandomNumber << std::endl;
}