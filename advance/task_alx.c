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

void print_dog(struct dog *d){


    if (!d){
        exit(98);
    }

     if ((*d).name == NULL)
       (*d).name = "(nil)";
     if ((*d).owner == NULL){
        (*d).owner = "(nil)";
    } else{
        printf("Name: %s\n", (*d).name);
        printf("Age: %f\n", (*d).age);
        printf("Owner: %s\n", (*d).owner);
    }
}


typedef struct dog dog_t;



dog_t *new_dog(char *name, float age, char *owner){

    struct dog *d;

    if (d == NULL)
        return NULL;


}
void show() {
    dog_t my_dog;

    my_dog.name = NULL;
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);

}