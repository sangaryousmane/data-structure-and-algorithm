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
// Use putchar only
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
// Use putchar only
int single_digits() {
    int i = 0;

    // Loop thought the number from 0 to 10
    for (; i < 10; i++) {
        putchar(i + '0'); // print the number
        if (i < 9) {          // check whether the number is less than 9
            putchar(',');  // print comma if it is.
            putchar(' ');  // and a space
        } else
            putchar(' '); // print only a space if not
    }
    return 0;
}

// #11 Write a program that prints all possible different combinations of two digits.
// Use putchar only
int comb_two_digits() {
    int i = 0, j;

    // traverse until less than 10
    for (; i < 10; i++) {

        // Traverse until less than 10 but start at i+1
        for (j = i + 1; j < 10; j++) {
            putchar((i % 10) + '0');
            putchar((j % 10) + '0');

            // Check if first number is 8 and second is 9
            if (i == 8 && j == 9)
                continue;

            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}

// #12 Write a program that prints all possible different combinations of three digits.
// Use putchar only
int comb_three_digits() {
    int i, j, k;

    for (i = 0; i <= 7; i++) {
        for (j = 0; j <= 8; j++) {
            for (k = 0; k <= 9; k++) {
                putchar((i % 10) + '0');
                putchar((j % 10) + '0');
                putchar((k % 10) + '0');

                if (i == 7 && j == 8 && k == 9)
                    continue;

                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}

// #13 Write a program that prints all possible combinations of two two-digit numbers.
// Use putchar only
int comb_two_two_digit() {
    // int i, j;
    // nested loop to 99
    // print i % 10 and i / 10 with a space
    // do same for j % 10 and j /10 with a space
    // check is i== 98 and j==99 skip
    // print a newline

    int i, j;
    for (i = 0; i <= 98; i++) {
        for (j = i + 1; j <= 99; j++) {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');

            putchar((j / 10) + '0');
            putchar((j % 10) + '0');
            putchar(' ');

            if (i == 98 && j == 99)
                continue;

            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;

}

// prints the largest of three integers.
int largest_of_three(int a, int b, int c) {
    int largest;

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }
    printf("%d is the largest", largest);
    return 0;
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year) {
    if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0)) {
        if (month >= 3 && day >= 60) {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    } else {
        if (month == 2 && day == 60) {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        } else {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}