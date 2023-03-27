//
// Created by sanga on 27/03/2023.
//

#include <stdio.h>
#include <string.h>

// Takes a pointer and update it value to 98
void reset_to_98(int *n) {
    *n = 98;
}

// swaps two numbers
void swap_int(int *a, int *b){

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Return the length of a string
int do_strlen(char *s){
    return strlen(s);
}

void do_puts(char *s){
    puts(s);

}