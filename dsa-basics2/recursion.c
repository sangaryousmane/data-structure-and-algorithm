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
int fibonacci4(int n) {

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci4(n - 1) + fibonacci4(n - 2);
}


// Write a recursive function called sumDigits to return the sum of all of the digits in a given integer value.  Use a helper function if necessary.
unsigned int sumOfDigits(int n) {

    // Base case
    if (n == 0)
        return 0;

    // n % 10 gets the last digit, the n / 10 cut the last digit out each time the function is call
    return (n % 10) + sumOfDigits(n / 10);

}

// count vowels
int countVowels(char *str) {
    if (*str == '\0') {
        return 0;
    }
    int count = countVowels(str + 1);
    if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' ||
        *str == 'I' || *str == 'O' || *str == 'U') {
        return count + 1;
    }
    return count;
}

// Write a function that prints a string, followed by a new line.
void _puts_recursion(char *s) {

    if (*s == '\0') {
        putchar('\n');
    } else {
        putchar(*s);
        _puts_recursion(s + 1);
    }
}
// Write a recursive program that prints a string in reverse
void _print_rev_recursion(char *s){
    if (*s  != '\0'){
        _print_rev_recursion(s + 1);
        putchar(*s);
    }
}
// Write a function that finds the length of a string
int _strlen_recursion(char *s){

    if (*s != '\0'){
        return 1 + _strlen_recursion(s + 1);
    }
    return 0;
}

int fact(int n){
    if (n == 0)
        return 1;
    if (n < 0)
        return -1;
    return n * fact(n - 1);
}

// Write a function that returns the value of x raised to the power of y.
int _pow_recursion(int x, int y){

    if (y < 0)
        return -1;
    else if (y == 0)
        return 1;

    return x * _pow_recursion(x, y -1);
}