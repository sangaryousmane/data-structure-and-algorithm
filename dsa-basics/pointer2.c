//
// Created by sanga on 03/04/2023.
//

#include <stdio.h>

// This C file demonstrates a pointer to a pointer or double pointer

int mimic_pointer_to_pointer(){
    int var = 9000;
    int *ptr;
    int **pptr;

    ptr = &var;
    pptr = &ptr;
    printf("Value of var is: %d\n", var);
    printf("Value of *ptr is: %d\n", *ptr);
    printf("Value of **pptr is: %d\n", **pptr);
    return 0;
}

int two_2_array(){
    int a[3][2] = {
            {2, 3},
            {10, 13},
            {11, 14}};

    for (int row = 0; row < 3; row++){
        for (int column = 0; column < 2; column++){
            if (a[row][column] % 2 == 0){
                continue;
            } else {
                printf("%d ", a[row][column]);
            }
        }
    }
    return 0;
}

int two_2_array2(){
    int array_2D[2][4]={
            {1, 2, 3, 4},
            {5, 6, 7, 8}};

    for (int row = 0; row < 2; row++){
        for (int column = 0; column < 4; column++){
            printf("Please enter array: array_2D[%drow][%dcolumn]", row, column);
            scanf("%d", &array_2D[row][column]);
        }
    }
    return 0;
}

// Write a function that fills memory with a constant byte.
// mimic memset and return the string pointer

char *do_memset(char *s, char b, int n){
    unsigned int count = 0;

    for (; count < n; count++){
        s[count] = b;
    }
    return s;
}

// Write a function that copies memory area.
// The _memcpy() function copies n bytes from memory area src to memory area dest
char *do_memcpy(char *dest, char *src, int n){
    unsigned int count = 0;
    while (count < n){
        *(dest + count) = src[count]; // copying the value in src to dest
        count++;
    }
    return (dest);
}