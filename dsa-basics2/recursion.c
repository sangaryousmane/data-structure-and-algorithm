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

    // Iterative method
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

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

// Find the lowercase alphabet using recursion
void print_alphabet2(char i) {

    printf("%c ", i);
    if (i != 'z') {
        print_alphabet2(i + 1); // Go to the next character
    }
}


// Find the fibonacci series using recursion
int fibonacci4(int n) {

    // 0 1 1 2 3 5 8 13 21 34 55
    // 5 - 1 + 4 - 2
    // 2 - 1 + 1 - 2
    // = 4 + 1 = 5
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci4(n - 1) + fibonacci4(n - 2);
}


// Write a recursive function called sumDigits to return the sum of all the digits in a given integer value.  Use a helper function if necessary.
unsigned int sumOfDigits(int n) {

//    int i = 1;
//    int j, k, sum = 0;
//    while (i <= n) {
//        j = n % 10;
//        k = n / 10;
//        sum = j + k;
//        i++;
////    }
//    printf("Sum is %d\n", sum);
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
void _print_rev_recursion(char *s) {
    if (*s != '\0') {
        _print_rev_recursion(s + 1);
        putchar(*s);
    }
}

// Write a function that finds the length of a string
int _strlen_recursion(char *s) {

    if (*s != '\0') {
        return 1 + _strlen_recursion(s + 1);
    }
    return 0;
}

int fact(int n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return -1;
    return n * fact(n - 1);
}

// Write a function that returns the value of x raised to the power of y.
int _pow_recursion(int x, int y) {

    if (y < 0)
        return -1;
    else if (y == 0)
        return 1;

    return x * _pow_recursion(x, y - 1);
}

// Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
// Iterative
//int is_prime(int n, int i);
//int is_prime_number1(int n){
//    int prime = is_prime(x, x / 2);
//    if (prime == 1) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}

// Recursive
//int is_prime(int n, int i){
//
//    if (i == 1){
//        return 1;
//    } else{
//        if (n % i == 0){
//            return 0;
//        } else{
//            return is_prime(n, i - 1);
//        }
//    }
//
//}

// Palindrome
int _palindrome(char *s, int start, int end) {
    if (start >= end) {
        return 1;
    } else {
        if (s[start] != s[end]) {
            return 0;
        } else {
            return _palindrome(s, start + 1, end - 1);
        }
    }
}

int is_palindrome(char *s) {
    int end = _strlen_recursion(s);

    int result = _palindrome(s, 0, end - 1);

    if (result == 1) {
        return 1;
    }
    return 0;

}

int _sqrt_recursion(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int x = _sqrt_recursion(n - 1);
    int root = ((x * x + n) / (2 * x));

    if (root == x) {
        return root;
    } else {
        return -1;
    }

}


/**
 * _sqrt_recursion - calculates the square root of a number using recursion
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int helper_sqrt(int n, int i);

int _sqrt_recursion1(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return helper_sqrt(n, 1);
    }
}

/**
 * helper_sqrt - helper function for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int helper_sqrt(int n, int i) {
    if (i * i == n) {
        return i;
    } else if (i * i > n) {
        return -1;
    } else {
        return helper_sqrt(n, i + 1);
    }
}


/**
 * wildcmp - compares two strings using recursion
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2) {
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    } else if (*s1 == *s2) {
        return wildcmp(s1 + 1, s2 + 1);
    } else if (*s2 == '*') {
        if (*s1 == '\0') {
            return wildcmp(s1, s2 + 1);
        } else {
            return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
        }
    } else {
        return 0;
    }
}

int prime_helper(int n, int i);

/**
 * is_prime_number1 - checks if a number is prime using recursion
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number1(int n) {
    if (n <= 1) {
        return 0;
    } else {
        return prime_helper(n, 2);
    }
}

/**
 * prime_helper - helper function for is_prime_number1
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int prime_helper(int n, int i) {
    if (i == n) {
        return 1;
    } else if (n % i == 0) {
        return 0;
    } else {
        return prime_helper(n, i + 1);
    }
}