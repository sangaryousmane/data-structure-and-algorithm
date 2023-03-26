//
// Created by sanga on 26/03/2023.
//
#include <ctype.h>
#include <stdio.h>

// This function uses two ways to check lower or upper case
// it first used builtin and later used ascii
void is_uppercase(int c) {

//    if (isupper(c))
//        printf("%c is uppercase", c);
//    else
//        printf("%c is lowercase", c);

    if (c <= 90)
        printf("%c is uppercase ", c);
    else
        printf("%c is lowercase ", c);
}

// This function checks for digit in two ways
// return 1 if it's digit, otherwise 0
int is_digit(int c) {
    if (isdigit(c))
        return 1;
    else
        return 0;
}

// This function multiplies two integers
// We turn the product to positive when either of the arguments is negative
int multiply(int a, int b) {
//    if ((a < 0) || (b < 0)) {
//        return -(a * b);
//    } else {
//        return a * b;
//    }

    // We can also just return the two values without any check.
    return a * b;
}

// Write a function that prints the numbers, from 0 to 9, followed by a new line.
void print_numbers(void) {

    int i;
    for (i = 0; i <= 9; i++) {
        putchar(i + '0');
    }
    putchar('\n');
}
// Write a function that prints the numbers, from 0 to 9, followed by a new line
// Skip 2 and 4

void print_most_numbers(void) {
    int i;

    for (i = 0; i < 10; i++) {
        if ((i == 2) || (i == 4))
            continue;
        putchar(i + '0');
    }
    putchar('\n');
}

// Print from 0 to 14 ten times
void more_numbers(void) {
//    for i = 0 to 10
//            for i = 0 to 14
//    print newline

    int i, j;
    for (i = 1; i <= 10; i++) {

        for (j = 0; j <= 14; j++) {
            if (j > 9) {
                putchar((j / 10) + '0');
            }
            putchar((j % 10) + '0');
        }
        putchar('\n');
    }
}

// print the underscore character n times
void print_line(int n) {
    int i;

    if (n > 0) {
        for (i = 0; i < n; i++) {
            putchar('_');
        }
    }
    putchar('\n');
}

// Write a function that draws a diagonal line on the terminal
// this function uses the space variable to provide a space(' ')
// each time a / character is printed.
void print_diagonal(int n) {
    int counter, space, end = n - 1;

    if (n > 0) {
        for (counter = 0; counter < n; counter++) {
            for (space = 0; space < counter; space++) {
                putchar(' ');
            }
            putchar('\\');
            if (counter == end)
                continue;
            putchar('\n');
        }
    }
    putchar('\n');
}

// Write a function that prints a square, followed by a new line.
void print_square(int size) {
    int i, j, end = size - 1;

    if (size > 0) {
        for (i = 0; i < size; i++) {
            for (j = 0; j < end; j++) {
                putchar('#');
            }
            putchar('#');
            putchar('\n');
        }
    } else {
        putchar('\n');
    }
}


// This function prints fizzbuzz for multiples of 3 an 5
// prints Fizz for multiple of 3 and Buzz for multiples of 5
// It prints the number if all of the above checks are false.
void fizzBuzz() {

    int i;

    for (i = 1; i <= 100; i++) {
        if ((i % 5 == 0) && (i % 3 == 0)) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {

            if (i != 100)
                printf("Buzz "); // print space btw if i is not 10
            else
                printf("Buzz");  // don't print space if i reach 100
        } else {
            printf("%d ", i);   // print any number that's not a multiple of 3 and 5
        }
    }
}


// Write a function that prints an integer.

void print_number(int n){
    long num = n;

    if (n < 0){
        putchar('-');
        num = -num;
    }
    if(num > 9){
        print_number(num / 10);
    }
    putchar((num % 10) + '0');
}