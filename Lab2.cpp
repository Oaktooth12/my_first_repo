#include <iostream> // Include the input/output library
#include <string>   // Include the string library (not used but can be useful)
#include <stdexcept> // Include the runtime error library for exceptions
#include <limits> // Include limits to handle input validation

// Function to perform division
float divide(int a, int b) {
    if (b == 0) { // Check if the denominator is zero
        throw std::runtime_error("Division by Zero"); // Throw an exception if true
    }
    return static_cast<float>(a) / b; // Perform division and return as float
}

// Function to perform addition
float add(int a, int b) {
    return a + b; // Return the sum of a and b
}

// Function to perform subtraction
float subtract(int a, int b) {
    return a - b; // Return the difference of a and b
}

// Function to perform multiplication
float multiply(int a, int b) {
    return a * b; // Return the product of a and b
}

int main() {
    char choice; // Variable to store the user's choice of operation
    int num1;   // Variable for the first numerical input
    int num2;   // Variable for the second numerical input
    
    do {
        // Prompt for the type of operation the user wants to perform
        std::cout << "What function would you like to use? (A for Add, S for Subtract, M for Multiply, D for Divide): ";
        std::cin >> choice; // Read the user's choice

        // Prompt for two numerical values
        std::cout << "Enter 2 Numerical Values: ";

        // Validate input for two integers
        while (!(std::cin >> num1 >> num2)) {
            std::cout << "Invalid input." << std::endl; // Inform user of invalid input
            std::cout << "Please enter only numerical values: ";
            std::cin.clear(); // Clear the error flag in cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        }

        // Perform the selected operation based on the user's choice
        switch (choice) {
            case 'A':
                std::cout << "Result: " << add(num1, num2) << std::endl;//Prints the result of the addition Function
                break;
            case 'a':
                std::cout << "Result: " << add(num1, num2) << std::endl;
                break;
            case 'S' :
                std::cout << "Result: " << subtract(num1, num2) << std::endl;//Prints the result of the Subtraction Function
                break;
            case 's' :
                std::cout << "Result: " << subtract(num1, num2) << std::endl;
                break;
            case 'M':
                std::cout << "Result: " << multiply(num1, num2) << std::endl;//Prints the result of the Muiltplication Function
                break;
            case 'm' :
                std::cout << "Result: " << multiply(num1, num2) << std::endl;
                break;
            case 'D' :
               std::cout << "Result: " << divide(num1, num2) << std::endl;//Prints the result of the Division Function
                break;
            case 'd' :
                std::cout << "Result: " << divide(num1, num2) << std::endl;
                break;
            default:
                std::cout << "Invalid function! Please enter A, S, M, or D." << std::endl;//Handles Invalid Inputs
        }

        
        std::cin.clear();// Clear the input stream
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard any remaining invalid input
    } while (true); // Continue the loop indefinitely

    return 0; // End of the program
}