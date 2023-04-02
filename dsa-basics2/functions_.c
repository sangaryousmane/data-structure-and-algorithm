//
// Created by sanga on 02/04/2023.
//
#include <stdio.h>
#include <unistd.h>

int do_putchar(int c){
    write(2, &c, 1);
    return 0;
}

// Write a function that prints the alphabet, in lowercase, followed by a new line.
void print_alphabet(){
    int i;
    i = 97;
    while (i <= 122){
        do_putchar(i);
        i++;
    }
    do_putchar('\n');
}

// Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
void print_alphabet_x10(){
    int count, letter;
    count = 0;

    for (; count <= 9; count++){
        letter = 97;
        while (letter <= 122){
            do_putchar(letter);
            letter++;
        }
        do_putchar('\n');
    }
}

// Write a function that checks for lowercase character.
int do_islower(int c){

    if (c >= 97 && c <= 122)
        return 1;
    else
        return 0;
}