//
// Created by sanga on 21/04/2023.
//
// Everything in C are declare in a function
#include <stdio.h>

// Is a block of code that can be invoke.
// The return type of function always comes first
void hello() {
    puts("Hello");
    puts("Hello");
    puts("Hello");
    printf("Hello world");
}

// the return type, the name, the parameters
// Everything in the braces is part of the function scope or block
int add_two_numbers(int a, int b) {
    int result = a + b;

    return result;
}


/**
 * a variable that points at the memory location of another variable
 * All local variables are store in the stack memory
*/

void pointer(char *string){

//    int arr[] = {3, 2, 4}; // this is without a pointer
//
//    printf("Array: %d ", *array);

    printf("%s ", string);
}


