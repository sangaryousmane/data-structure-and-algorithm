//
// Created by sanga on 01/04/2023.
//
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
// Write a C program that prints exactly "\"Programming is like building a multilingual puzzle,
// followed by a new line.
int print_one(){
    puts("\"Programming is like building a multilingual puzzle");
    return 0;
}


// Write a C program that prints exactly with proper grammar, but the outcome is a piece of art, followed by a new line.
int print_two(){
    printf("with proper grammar, but the outcome is a piece of art,\n");
    return 0;
}

// Write a C program that prints the size of various types on the computer it is compiled and run on.
int print_all_size(){
    printf("Size of a char: %llu\n", sizeof(char));
    printf("Size of an int: %llu\n", sizeof(int));
    printf("Size of a long: %llu\n", sizeof(long));
    printf("Size of a long int: %llu\n", sizeof(long int));
    printf("Size of a float: %llu\n", sizeof(float));
    printf("Size of a double: %llu\n", sizeof(double));
    printf("Size of a long double: %llu\n", sizeof(long double));
    return 0;
}

/**
* Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error. Do not use any puts, printf et al.
 * THe program should return 1
*/

int use_none(){
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
    return 1;
}


// Task 0x01. ALX #1
/* more headers goes there */

/* betty style doc for function main goes there */
int positive_negative(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
        printf("%d is positive\n", n);
    else if(n == 0)
        printf("%d is Zero\n", n);
    else
        printf("%d is negative\n", n);
    return (0);
}