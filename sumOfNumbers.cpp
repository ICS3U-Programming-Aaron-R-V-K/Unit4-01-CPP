// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: April 04, 2025
// Is a while true program
// It gets the number from the use and adds + 1 from
// 0 to the user number and adds them all

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // Get user number as a string
    std::string userNumStr;
    std::cout << "Enter any number: ";
    std::cin >> userNumStr;
    // Define variables
    float numFloat;
    int intNum;

    // Set
    int sumNum = 0;
    int counter = 0;

    // Try catch statement
    try {
        // Validate the input from the user is an integer
        numFloat = std::stof(userNumStr);
        intNum = round(numFloat);

        // Validate that the number is positive
        if (intNum < 0) {
            std::cout << "Enter a positive num" << std::endl;
        } else {
            // While statement if counter is less
            // than the input number from the user
            while (counter < intNum) {
                // Calculation to add all numbers inside the user number
                counter = counter + 1;
                sumNum = sumNum + counter;
            }

            // The program displays the result from all the numbers
            // After it reaches the user number and stops
            std::cout << "sum: " << sumNum << std::endl;
        }
    } catch (...) {
        // Exception if the user input is not a number
        std::cout << userNumStr << ", is not a number" << std::endl;
    }
    return 0;
}
