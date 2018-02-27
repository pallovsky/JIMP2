//
// Created by mwypych on 02.02.17.
//
#include "Factorial.h"

int factorial(int value) {

    if (value == 0 || value == 1) {
        return 1;
    }

    if (value > 12 || value < -12) {
        return 0;
    }

    if (value > 0) {
        return value * factorial(value - 1);
    }

    if (value < 0) {
        return value * factorial(value + 1);
    }
}

