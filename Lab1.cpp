// Lab 1 Class 475
//Objective: Get familiar with the basic structure of a C program and fundamental syntax.
//Task: Write a C program that takes a user’s name and age as input and prints a personalized greeting.
//Challenge: Modify the program to ensure that the name string contains only alphabetic characters, prompting re-entry if the validation fails.
#include <iostream>   // Include standard input/output stream library
#include <cctype>     // Include library for character handling functions
#include <string>     // Include library for string manipulation

int main() {
    // Declare variables to hold user input
    int age;
    std::string name;

    // Boolean variable to check if the name input is valid
    bool valid = false;

    // Loop until a valid name is entered
    while (!valid) {
        std::cout << " Please Enter Your Name. " << std::endl;  // Prompt for name input
        std::getline(std::cin, name);  // Read the entire line of input for the name

        valid = true;  // Assume the input is valid initially

        // Check each character in the name for validity
        for (size_t i = 0; i < name.length(); i++) {
            // If the character is not an alphabetic character or a space, mark as invalid
            if (!isalpha(name[i]) && name[i] != ' ') {
                valid = false;  // Set valid to false
                std::cout << " Invalid input, Please enter a valid name with alphabetic character only." << std::endl;  // Error message
                break;  // Exit the loop as invalid input has been detected
            }
        }
    }

    std::cout << " Please Enter Your Age. " << std::endl;  // Prompt for age input
    std::cin >> age;  // Read the age from user input

    // Greet the user with their name
    std::cout << "Hello, " << name << "!" << std::endl;

    // Conditional statements to check age and print appropriate message
    if (age == 18) {
        std::cout << "You are old enough to drink in Mexico!!" << std::endl;  // Message for 18 years old
    } else if (age < 18) {
        std::cout << "You are a minor!!" << std::endl;  // Message for those under 18
    } else {
        std::cout << "You are over the drinking age in Mexico!!" << std::endl;  // Message for those over 18
    }

    return 0;  // Indicate that the program ended successfully