//
// Created by sanga on 26/03/2023.
//
#include <ctype.h>
#include <stdio.h>

void is_uppercase(int c){

    if (isupper(c))
        printf("%c is uppercase", c);
    else
        printf("%c is lowercase", c);
}
