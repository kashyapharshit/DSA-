#include<stdio.h>   // Include the standard input/output library
#include<stdlib.h>  // Include the standard library for dynamic memory allocation

// Define a structure named 'str'
struct str
{
    int x; // Integer variable 'x'
    int y; // Integer variable 'y'
};

// Function to dynamically allocate memory for a structure and initialize its members
struct str *fun(int a, int b)
{
    // Allocate memory for a structure of type 'str' using malloc
    struct str *ptr = (struct str*)malloc(sizeof(struct str));

    // Assign values to the structure members
    ptr->x = a;     // Assign the value of 'a' to 'x'
    ptr->y = b + 10; // Add 10 to 'b' and assign it to 'y'

    // Return the pointer to the allocated and initialized structure
    return ptr;
}

// Function to print the values of the structure
void print(struct str s)
{
    // Print the values of 'x' and 'y'
    printf("%d %d", s.x, s.y);
    printf("\n"); // Move to the next line
}

int main()
{
    struct str *ptr1, *ptr2; // Declare two pointers of type 'struct str'

    // Call the 'fun' function to allocate memory and initialize the structure
    ptr1 = fun(3, 5); // 'ptr1' points to a structure with x = 3, y = 15
    ptr2 = fun(2, 9); // 'ptr2' points to a structure with x = 2, y = 19

    // Print the values of the structures by dereferencing the pointers
    print(*ptr1); // Output: 3 15
    print(*ptr2); // Output: 2 19

    // Free the allocated memory to avoid memory leaks
    free(ptr1);
    free(ptr2);

    return 0; // Indicate successful program termination
}