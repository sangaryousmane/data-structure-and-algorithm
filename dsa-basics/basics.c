//
// Created by sanga on 26/03/2023.
//
#include <ctype.h>
#include <stdio.h>

// This function uses two ways to check lower or upper case
// it first used builtin and later used ascii
void is_uppercase(int c){

//    if (isupper(c))
//        printf("%c is uppercase", c);
//    else
//        printf("%c is lowercase", c);

     if (c <=90)
         printf("%c is uppercase ",c);
     else
         printf("%c is lowercase ", c);
}
