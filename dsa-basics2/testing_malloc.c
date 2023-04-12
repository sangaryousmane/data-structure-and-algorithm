//
// Created by sanga on 12/04/2023.
//

#include <stdio.h>
#include <stdlib.h>

// Using malloc to create a space in memory which can hold n number
// of character arrays
void test_malloc(){
    char *s;

    s = malloc(sizeof(char) * 3);
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '\0';
    printf("%s\n", s);
    free(s);
}


void test2(int n){
    int *tab;

    // Using malloc to create a space in memory which can hold n number
    // of integers array
    tab = malloc(sizeof(*tab) * n);
    tab[0] = -98;
    tab[1] = 100;
    tab[2] = 210;
    printf("%d %d %d\n", tab[0], tab[1], tab[2]);
    free(tab);
}

int testing_malloc(){
    char *s;
    int i;

    i = 0;
    while (1){
        s = malloc(INT_MAX);
        if (s == NULL){
            printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
            return 1;
        }
        s[0] = 'O'; // assign 0 to as character of the string
        i++; 
    }
}