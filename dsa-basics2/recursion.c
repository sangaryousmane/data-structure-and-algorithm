//
// Created by sanga on 06/04/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Recursive method
int factorial1(int n) {

    if (n <= 0)
        return 1;

    return n * factorial1(n - 1);
}

// Iterative method
int factorial2(int n) {
    int result = 1;
//    int i =1;
//    for (; i <= n; i++){
//        result *=i;
//    }

    int j = 1;
    while (j <= n) {
        result *= j;
        j++;
    }
    return result;
}

// Alphabet iterative
void print_char(int c) {
    write(1, &c, 1);
}


void print_alphabet1() {
    char i = 97;

    while (i <= 122) {
        print_char(i);
        i++;
    }
    print_char('\n');
}

void print_alphabet2(char i) {

    printf("%c ", i);
    if (i != 'z') {
        print_alphabet2(i + 1);
    }
}


// Find the fibonacci series using recursion
int fibonacci4(int n){

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci4(n -1) + fibonacci4(n - 2);
}


// Write a recursive function called sumDigits to return the sum of all of the digits in a given integer value.  Use a helper function if necessary.
unsigned int sumOfDigits(int n){

    // Base case
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}