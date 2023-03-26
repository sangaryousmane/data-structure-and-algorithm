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

    for (i = 0; i < 10; i++){
        if ((i == 2) || (i == 4))
            continue;
        putchar(i + '0');
    }
    putchar('\n');
}

void more_numbers(void){
//    for i = 0 to 10
//            for i = 0 to 14
//    print newline

     int i, j;
     for(i = 1; i <= 10; i++){

         for (j = 0; j <= 14; j++){
             if (j > 9) {
                 putchar((j / 10) + '0');
             }
             putchar((j % 10) + '0');
         }
         putchar('\n');
     }
}
