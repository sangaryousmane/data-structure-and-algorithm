//
// Created by sanga on 02/04/2023.
//
#include <stdio.h>
#include <unistd.h>

int do_putchar(int c) {
    write(2, &c, 1);
    return 0;
}

// Write a function that prints the alphabet, in lowercase, followed by a new line.
void print_alphabet() {
    int i;
    i = 97;
    while (i <= 122) {
        do_putchar(i);
        i++;
    }
    do_putchar('\n');
}

// Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
void print_alphabet_x10() {
    int count, letter;
    count = 0;

    for (; count <= 9; count++) {
        letter = 97;
        while (letter <= 122) {
            do_putchar(letter);
            letter++;
        }
        do_putchar('\n');
    }
}

// Write a function that checks for lowercase character.
int do_islower(int c) {

    if (c >= 97 && c <= 122)
        return 1;
    else
        return 0;
}

// Write a function that checks for alphabetic character.
int do_isalpha(int c) {

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}

// Write a function that prints the sign of a number.
int print_sign(int n) {

    if (n > 0) {
        do_putchar('+');
        return 1;
    } else if (n == 0) {
        do_putchar('0');
        return 0;
    } else {
        do_putchar('-');
        return -1;
    }
}

// Write a function that computes the absolute value of an integer.
int do_abs(int n) {

    // TODO: please note that zero is a positive number
    if (n < 0)
        n = -n;
    else
        n = n;
    return n;
}

// Write a function that prints the last digit of a number.
int print_last_digit(int n) {

    if (n < 0) {
        do_putchar('0' - (n % 10));
        return -1 * (n % 10);
    } else {
        do_putchar('0' + (n % 10));
        return n % 10;
    }
}

// Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
void jack_bauer(){
    int hours, minutes;

    for (hours = 0; hours < 24; hours++){
        for (minutes =0; minutes < 60; minutes++){
            printf("%02d:%02d\n", hours, minutes);
        }
    }
}

// Write a function that adds two integers and returns the result.
int add(int a, int b){
    return a + b;
}

/**
* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
*/
int natural_sum35(){
    int i;
    i = 0;
    int sum = 0;
    for (; i <  1024; i++){
        if (i % 3 ==0 || i % 5 == 0){
            sum +=i;
        }
    }
    printf("%d\n", sum);

}