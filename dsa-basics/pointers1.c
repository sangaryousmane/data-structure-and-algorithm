//
// Created by sanga on 03/04/2023.
//
#include <stdio.h>

int all(){
    int n = 10;
    int *p = &n;

    int size = sizeof(&p);

    printf("address of p is: %p and size"
           " is: %d and value is: %d\n", &p, size, *p);

    *p = 50;
    printf("Value of pointer afterwards: %d\n", *p);
    return 0;
}

int sum(){
    int n = 5;
    int *a = &n;
    a[1] = 40;
    printf("The result is %d\n", *a + a[1]);
    return 0;
}

void reset_to98(int *n){
    *n = 98;

}

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int v2_strlen(char *s){

//    int i = 0, length = 0;
//
//    for (; s[i] != '\0'; i++){
//        length +=1;
//    }

    int i = 0, length = 0;

    while (s[i] != '\0'){
        length++;
        s +=1;
    }
    return length;
}

void v2_puts(char *str){
    puts(str);
}

void v2_print_rev(char *s){

    int i = 0;

    while (s[i] != '\0'){
        printf("%c", s[i]);
        i--;
    }
}