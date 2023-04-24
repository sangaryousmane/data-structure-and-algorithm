//
// Created by sanga on 21/04/2023.
//
// Everything in C are declare in a function
#include <stdio.h>

void foo(int a, int b);

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

void pointer(char *string) {

//    int arr[] = {3, 2, 4}; // this is without a pointer
//
//    printf("Array: %d ", *array);

    printf("%s ", string);
}

// Implementing function without a pointer
int sub(int a, int b) {
    return a - b; // 20, 14  = 6
}

void say_hi() {
    puts("Hi!");
}

int points_at_sub() {

    void (*ptr)();
    ptr = &say_hi;
    ptr();
    return 0;
}


void foo(int a, int b) {
    int (*ptr)(int, int); // assigned the same data type of the function

    ptr = &sub; // We got the memory address of the function

    int result = ptr(a, b); // We got the result and store it in a variable
//    printf("%d\n", result);
    printf("Address of the sub function: %p\n ", ptr);
    printf("Result after dereference: %d\n", result);
}


// Write a function that executes a function given as a parameter on each element of an array.
// Use function pointers
void array_iterator(int *array, size_t size, void (*action)(int)) {
    // Declare a counter variable
    int count; // 1 2 3 4

    // Use a loop
//    do while, while, for loop

    // A loop is a repetition of something until a condition stops it
    // Infinite loop: is a loop that keeps repeating without a stop
    // Segmentation error is where a pointer has a null value or uninitialized.
    if (size > 0 && array != NULL) { // 4
        for (count = 0; count < size; count += 1) {  // 0, 1 2 4
            action(array[count]);

        }
    }

}

/**
 * A pointer: points at an address of a variable
 *  A pointer function: a pointer that points to an address of a function
 *
 */

void I_love_C(char *name) {
    printf("I love C, And my name is: %s ", name);
}

int age(int a) {
    return a;
}

void point_to_ILoveCFunc() {
//    void (* ptr)(char *name);
//
//    ptr = &I_love_C;
//
//    ptr("Ousmane");  // Dereference the function, I_love_C

    int (*ptr)(int c);
    ptr = &age;

    int result = ptr(50);

    printf("You're %d years old", result);

}
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list nums;
    unsigned int i = 0;
    int sum = 0;
    va_start(nums, n); // Much like a function that starts our initialization
    while (i < n)
    {
        sum += va_arg(nums, int); // Much like a function that access our variables
        i++;
    }
    va_end(nums);  // Much like a function that free everything from memory after using it
    return sum;
}

int show_main()
{
    int s1 = sum_them_all(2, 1, 2);
    int s2 = sum_them_all(3, 1, 2, 3);
    printf("s1 = %d\n", s1);
    printf("s2 = %d\n", s2);
    return 0;
}




void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list nums;
    unsigned int index = 0;
    va_start(nums, n);
    while (index < n)
    {
        printf("%d", va_arg(nums, int));
        if (index != (n - 1) && separator != NULL)
            printf("%s", separator);
        index++;
    }
    printf("\n");
    va_end(nums);
}

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list strings;
    char *str;
    unsigned int index = 0;
    va_start(strings, n);
    while (index < n)
    {
        str = va_arg(strings, char *);
        switch (str != NULL)
        {
            case 1:
                printf("%s", str);
                break;
            case 0:
                printf("(nil)");
                break;
        }
        if (index != (n - 1) && separator != NULL)
            printf("%s", separator);
        index++;
    }
    printf("\n");
    va_end(strings);
}


void print_formatted_output(const char * const format, ...)
{
    int i = 0;
    char *s, *separator = "";
    va_list arguments;
    va_start(arguments, format);
    if (format != NULL)
    {
        while (format[i])
        {
            switch (format[i])
            {
                case 'c':
                    printf("%s%c", separator, va_arg(arguments, int));
                    break;
                case 'i':
                    printf("%s%d", separator, va_arg(arguments, int));
                    break;
                case 'f':
                    printf("%s%associated_function", separator, va_arg(arguments, double));
                    break;
                case 's':
                    s = va_arg(arguments, char *);
                    if (s == NULL)
                        s = "(nil)";
                    printf("%s%s", separator, s);
                    break;
                default:
                    i++;
                    continue;
            }
            separator = ", ";
            i++;
        }
    }
    printf("\n");
    va_end(arguments);
}