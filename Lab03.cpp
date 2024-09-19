#include <iostream>
#include <string>
#include <algorithm> // Include algorithm for sorting

// Function to sort an array of names in alphabetical order
void nameSort(std::string names[], int size) {
    std::string temp;  // Temporary variable for swapping
    // Bubble sort algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare and swap if the current name is greater than the next
            if (names[j] > names[j + 1]) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

// Function to remove duplicates from the non sorted array of names
void namedup(std::string names[], int &size) {
    // Sort the names first to make it easier to identify duplicates
    std::sort(names, names + size);
    
    int i = 0;  // Variable to track the index for unique names
    for (int j = 0; j < size; j++) {
        // Check for duplicates and only keep none duplicate names
        if (j == 0 || names[j] != names[j - 1]) {
            names[i++] = names[j]; // Store unique names
        }
    }
    size = i; // Update the size to reflect the number of unique names
}

int main(void) {
    int size; // Variable to hold the number of names
    std::cout << "Enter the Amount of Names to Sort: " << std::endl;
    std::cin >> size; // Read the number of names from user input
    std::string names[size]; // Declare an array of strings to hold names

    // Input loop to read names from the user
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a Name: " << std::endl;
        std::cin >> names[i]; // Read each name
    }

    namedup(names, size); // Remove duplicates
    nameSort(names, size); // Sorts the non dup names

    // Output the sorted names
    std::cout << "Sorted Unique Names Are:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << names[i] << std::endl; // Display each name
    }

    return 0; // End of the program
}  