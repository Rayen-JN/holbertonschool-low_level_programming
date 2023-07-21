# Variadic Function in C

A variadic function is a special type of function in C that allows you to accept a variable number of arguments. It means you can pass a different number of arguments each time you call the function. In C, variadic functions are implemented using the `<stdarg.h>` header, which provides a set of macros for handling variable argument lists.

This README file will guide you through the process of creating and using a variadic function in C.

## How to Define a Variadic Function

To define a variadic function, follow these steps:

1. Include the `<stdarg.h>` header in your C program.

2. Declare the function prototype with the ellipsis `...` as the last parameter. This indicates that the function will accept a variable number of arguments.

3. Inside the function body, use the `<stdarg.h>` macros to access the variable arguments.

## Code Example

Below is a simple C program that demonstrates how to define and use a variadic function:

```c
#include <stdio.h>
#include <stdarg.h>

// Function to find the sum of a variable number of integers
int sum(int num, ...) {
    int result = 0;

    // Declare a variable of type 'va_list'
    va_list args;

    // Initialize 'args' to point to the first variable argument
    va_start(args, num);

    // Loop through the arguments and add them to the result
    for (int i = 0; i < num; ++i) {
        result += va_arg(args, int);
    }

    // Clean up the 'args' variable
    va_end(args);

    return result;
}

int main() {
    int total1 = sum(3, 10, 20, 30);
    printf("Sum: %d\n", total1); // Output: Sum: 60

    int total2 = sum(5, 5, 10, 15, 20, 25);
    printf("Sum: %d\n", total2); // Output: Sum: 75

    return 0;
}
