#include <iostream>

// Function prototype
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Declare a pointer to a function that takes two ints and returns an int
    int (*operation)(int, int);

    // Assign the address of the add function to the pointer
    operation = add;

    // Use the pointer to call the add function
    int result1 = operation(3, 5);
    std::cout << "Result of add: " << result1 << std::endl;

    // Assign the address of the subtract function to the pointer
    operation = subtract;

    // Use the pointer to call the subtract function
    int result2 = operation(8, 3);
    std::cout << "Result of subtract: " << result2 << std::endl;

    return 0;
}
