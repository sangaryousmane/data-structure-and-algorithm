//
// Created by sanga on 17/04/2023.
//
#include <stdio.h>
#include <stdlib.h>

struct dog {
    char *owner;
    char *name;
    float age;
};


void init_dog(struct dog *d, char *name, float age, char *owner) {


    if (d != NULL) {
        (*d).name = name;
        (*d).age = age;
        (*d).owner = owner;
    }
}

void show() {
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
}