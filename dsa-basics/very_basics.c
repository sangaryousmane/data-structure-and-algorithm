//
// Created by sanga on 01/04/2023.
//
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

// Write a C program that prints exactly "\"Programming is like building a multilingual puzzle,
// followed by a new line.
int print_one() {
    puts("\"Programming is like building a multilingual puzzle");
    return 0;
}


// Write a C program that prints exactly with proper grammar, but the outcome is a piece of art, followed by a new line.
int print_two() {
    printf("with proper grammar, but the outcome is a piece of art,\n");
    return 0;
}

// Write a C program that prints the size of various types on the computer it is compiled and run on.
int print_all_size() {
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

int use_none() {
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
    return 1;
}


// Task 0x01. ALX #1
/* more headers goes there */

/* betty style doc for function main goes there */
int positive_negative(void) {
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is Zero\n", n);
    else
        printf("%d is negative\n", n);
    return (0);
}

// #2
int last_digit() {
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    // mimic the last digit number % 10

    if ((n % 10) > 5) {
        printf("Last digit of %d is %d and is greater than 5", n, n % 10);
    } else if ((n % 10) < 6 && (n % 10) != 0)
        printf("Last digit of %d is %d and is less than 6 and not 0 ", n, n % 10);
    else
        printf("Last digit of %d is %d and is 0", n, n % 10);
    return 0;
}

// #3 Write a program that prints the alphabet in lowercase, followed by a new line.
int print_lowercase() {
    int i;
    i = 97;
    // print all lowercase with newline
    while (i <= 122) {
        putchar(i);
        i++;
    }
    putchar('\n');
    return 0;
}

// #4 Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
int print_lower_and_upper() {
    int i, j;
    i = 97;
    j = 65;

    // print lowercase first
    while (i <= 122) {
        putchar(i);
        i++;
    }

    // print uppercase with a newline
    for (; j <= 90; j++) {
        putchar(j);
    }
    putchar('\n');
    return 0;
}

// #5 Write a program that prints the alphabet in lowercase, followed by a new line.
// Print all the letters except q and e
int print_lower_except() {
    int i;
    i = 'a';

    // This for loop is going to print all lowercase but not e and q
    for (; i <= 'z'; i++) {
        if (i == 'e' || i == 'q') {
            continue;
        }
        putchar(i);
    }
    putchar('\n');
    return 0;
}

// Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
// #6 and #7 are the same, just the way it is printed different.
int print_base10() {
    int i;
    i = 0;
    for (; i < 10; i++) {
        putchar(i + '0');
    }
    putchar('\n');
    return 0;
}

// #8 Write a program that prints the lowercase alphabet in reverse, followed by a new line.
int print_lowercase_reverse() {
    int i;
    i = 122;

    while (i >= 97) {
        putchar(i);
        i--;
    }
    putchar('\n');
    return 0;
}

// #9 Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
int print_base16_lower() {
    int j = 0;

    while (j < 10) {
        putchar(j + '0');
        j++;
    }

    for (int i = 'a'; i <= 'f'; i++) {
        putchar(i);
    }
    putchar('\n');
    return 0;
}

// #10 Write a program that prints all possible combinations of single-digit numbers.
int single_digits() {
    int i = 0;

    // Loop thought the number from 0 to 10
    for (; i < 10; i++) {
        putchar(i + '0'); // print the number
        if (i < 9) {          // check whether the number is less than 9
            putchar(',');  // print comma if it is.
            putchar(' ');  // and a space
        }
        else
            putchar(' '); // print only a space if not
    }
    return 0;
}