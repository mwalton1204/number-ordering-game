/*
 * File: functions.cpp
 * Author: Michael Walton
 * Project: Number Sorting Game
 */

#include "functions.h"

int random_number() {
    srand (time(NULL)); // initialize random seed
    return rand() % 1000 + 1;
}