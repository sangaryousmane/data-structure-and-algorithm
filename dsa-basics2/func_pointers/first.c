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
void hi(char *name){
    printf("Hello, %s! How are you? ", name);
}
void print_name(char *name, void (*f)(char *));
void show_result(){

    print_name("Ousmane", hi);
//    int result;
//    int (*ptr)(int , int);
//    ptr = &v2_add;
//
//    result = (*ptr)(4, 5);

//    ptr = &v2_subtract is same as ptr = v2_subtract
//    int (*ptr)(int, int);
//    ptr = v2_subtract;
//    result = ptr(14, 5);
//
//    void (*p)() = &hi;
//
//
//    printf("The result is: %d", result);
}

/**
 * print_name: prints a name.
 * @name: name to print
 * @f: function to invoke to display name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *)){
    f(name);
}