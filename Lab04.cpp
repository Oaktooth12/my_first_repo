
#include <iostream>

// The main function serves as the entry point of the program
int function1()
{
    // Initialize an integer variable 'a' with the value 3
    int a = 3;
    
    // Declare a pointer 'ptr' and set it to the address of 'a'
    int* ptr = &a;
    
    // Modify the value of 'a' through the pointer 'ptr'
    *ptr = 10;
    
    // Output the address of 'a'
    std::cout << "Address for a: " << &a << std::endl;
    
    // Output the current value of 'a'
    std::cout << "Value for a: " << a << std::endl;
    
    // Output the address stored in pointer 'ptr' (which points to 'a')
    std::cout << "Address for a: " << ptr << std::endl;
    
    // Output the value pointed to by 'ptr'
    std::cout << "Value for a: " << *ptr << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}

// Function 2 - This function demonstrates array manipulation using a pointer
int function2(){
    // Initialize an array 'arr' with 5 integer elements
    int arr[] = {10, 20, 30, 40, 50};

    // Declare a pointer 'ptr' and set it to point to the first element of 'arr'
    int* ptr = arr;

    // Loop through each element of the array
    for(int i = 0; i < 5; i++){
        // Output the current value pointed to by 'ptr'
        std::cout << (*ptr) << std::endl;
        
        // Increment the value pointed to by 'ptr' by 10
        *ptr += 10;
        
        // Output the new value pointed to by 'ptr'
        std::cout << (*ptr) << std::endl;

        // Move the pointer 'ptr' to the next element in the array
        ptr++;
    }

    // Return 0 to indicate successful execution
    return 0;
}

// Function 3 - This function allocates memory dynamically for an array and computes the sum of its elements
int function3(){
    // Declare an empty integer array (this is not used; you may consider removing)
    int arr[] = {};
    
    // Dynamically allocate memory for one integer (this should allocate for an array)
    int* ptr = new int;
    
    // Variable to hold the size of the array to be inputted by the user
    int size;

    // Variable to hold the sum of the array elements
    int sum = 0;

    // Prompt the user to enter the number of integers they wish to input
    std::cout << "Enter the Amount of Integer: " << std::endl;
    std::cin >> size;

    // Loop to enter each integer into the dynamically allocated array
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a Integer: " << std::endl;
        std::cin >> ptr[i]; // Store the input in the allocated memory
    }

    // Loop to compute the sum of all integers in the dynamic array
    for (int i = 0; i < size; i++) {
        sum += ptr[i];
    }

    // Output the sum of the array elements
    std::cout << "The sum of the array elements is: " << sum << std::endl;
    
    // Free the dynamically allocated memory to prevent memory leaks
    delete[] ptr; // Use delete[] to correctly delete an array allocated with new

    // Return 0 to indicate successful execution
    return 0;
}
    
    