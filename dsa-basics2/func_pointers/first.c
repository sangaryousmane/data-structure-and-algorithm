//
// Created by sanga on 20/04/2023.
//

#include <stdio.h>

int v2_add(int a, int b){
    return a + b;
}

int v2_subtract(int a, int b){
    return (a - b);
}
void show_result(){
    int result;
//    int (*ptr)(int , int);
//    ptr = &v2_add;
//
//    result = (*ptr)(4, 5);

//    ptr = &v2_subtract is same as ptr = v2_subtract
    int (*ptr)(int, int);
    ptr = v2_subtract;
    result = ptr(14, 5);

    printf("The result is: %d", result);
}