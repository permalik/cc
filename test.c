#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// Enum type
enum Color { RED, GREEN, BLUE };

// Struct type
struct Point {
    int x;
    int y;
};

// Typedef
typedef unsigned int uint;
typedef struct Point Point;

// Macro with variable arguments
#define PRINT(fmt, ...) printf(fmt, __VA_ARGS__)

int main() {
    // Keywords: variable declarations
    int x = 10;          // int
    float balance = 100.5; // float
    char letter = 'A';   // char
    double pi = 3.1415;  // double

    // Constants
    const int max_size = 100;
    const float speed_of_light = 3.0e8;

    // Using _Alignas (C11 feature)
    _Alignas(16) int aligned = 5;

    // Variable names and function names
    int sum = x + 5;
    printf("Sum: %d\n", sum);

    // Function names: basic function
    int add(int a, int b) {
        return a + b;
    }

    // Typedef usage
    Point p1 = {10, 20};
    printf("Point p1: (%d, %d)\n", p1.x, p1.y);

    // Using enum
    enum Color color = RED;
    if (color == RED) {
        printf("Color is red.\n");
    }

    // Pointer dereferencing and address-of operator
    int *p = &x;
    printf("Pointer dereference: %d\n", *p);  // Dereference
    printf("Address-of operator: %p\n", (void *)p); // Address-of

    // Member access and pointer to member access
    struct Point p2 = {30, 40};
    printf("Point p2: (%d, %d)\n", p2.x, p2.y);  // Member access
    struct Point *p_ptr = &p2;
    printf("Point through pointer: (%d, %d)\n", p_ptr->x, p_ptr->y);  // Member access through pointer

    // Conditional operator
    int max_val = (x > balance) ? x : balance;
    printf("Max value: %d\n", max_val);

    // Sizeof operator
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of Point struct: %zu\n", sizeof(Point));

    // Type casting
    double d_val = (double)x;
    printf("Type cast: %.2f\n", d_val);

    // Preprocessor directive #define and #include
    PRINT("This is a macro: %d\n", sum); // Macro usage

    // Preprocessor-defined constants
    printf("File: %s, Line: %d\n", __FILE__, __LINE__);
    printf("Date: %s, Time: %s\n", __DATE__, __TIME__);

    // Increment and Decrement Operators
    int counter = 0;
    counter++;
    printf("Increment: %d\n", counter);
    counter--;
    printf("Decrement: %d\n", counter);

    // Relational and Logical Operators
    if (x != balance && x < max_size) {
        printf("x is not equal to balance and less than max_size\n");
    }

    // Bitwise operations
    int a = 5, b = 3;
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT: %d\n", ~a);

    // Comma operator
    int z = (x = 3, balance = 4.5, x + (int)balance);
    printf("Result of comma operator: %d\n", z);

    // For loop example
    for (int i = 0; i < 5; i++) {
        printf("For loop index: %d\n", i);
    }

    // While loop example
    int j = 0;
    while (j < 3) {
        printf("While loop index: %d\n", j);
        j++;
    }

    // Do-while loop
    int k = 0;
    do {
        printf("Do-while loop index: %d\n", k);
        k++;
    } while (k < 2);

    // Switch-case statement
    switch (color) {
        case RED: 
            printf("The color is red\n");
            break;
        case GREEN:
            printf("The color is green\n");
            break;
        default:
            printf("Unknown color\n");
    }

    // goto statement
    int condition = 1;
    if (condition) {
        goto label;
    }

    label:
    printf("Jumped to label\n");

    // Struct with static variable
    static int count = 0;
    printf("Static count: %d\n", count);

    // External variable (declaration only)
    extern int global_var;
    printf("External variable: %d\n", global_var);

    // Typedef usage for unsigned int
    uint u = 100;
    printf("Unsigned integer: %u\n", u);

    return 0;
}
