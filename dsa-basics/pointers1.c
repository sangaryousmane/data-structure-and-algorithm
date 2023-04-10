//
// Created by sanga on 03/04/2023.
//
#include <stdio.h>

int all(){
    int *p;

    printf("address of p is: %p and size is: %llu", &p, sizeof(&p));
    return 0;
}

int sum(int *a){

    a[0] = 5;
    a[1] = 4;
    printf("The result of adding is %d\n", *a + *(a + 1));
    return 0;
}
