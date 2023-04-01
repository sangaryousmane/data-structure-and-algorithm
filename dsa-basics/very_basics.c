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

// #2
int last_digit(){
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    // mimic the last digit number % 10

    if ((n % 10) > 5) {
        printf("Last digit of %d is %d and is greater than 5", n, n % 10);
    }
    else if ((n % 10) < 6 && (n%10)  != 0)
        printf("Last digit of %d is %d and is less than 6 and not 0 ", n, n%10);
    else
        printf("Last digit of %d is %d and is 0", n, n%10);
    return 0;
}

// #3 Write a program that prints the alphabet in lowercase, followed by a new line.
int print_lowercase(){
    int i;
    i = 97;
    // print all lowercase with newline
    while (i <= 122){
        putchar(i);
        i++;
    }
    putchar('\n');
    return 0;
}

// #4 Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
int print_lower_and_upper(){
    int i, j;
    i = 97;
    j = 65;

    // print lowercase first
    while (i <= 122){
        putchar(i);
        i++;
    }

    // print uppercase with a newline
    for (; j <=90; j++){
        putchar(j);
    }
    putchar('\n');
    return 0;
}

// #5 Write a program that prints the alphabet in lowercase, followed by a new line.
// Print all the letters except q and e
int print_lower_except(){
    int i;
    i = 'a';

    // This for loop is going to print all lowercase but not e and q
    for (; i <= 'z'; i++){
        if (i == 'e' || i == 'q') {
            continue;
        }
        putchar(i);
    }
    putchar('\n');
    return 0;
}