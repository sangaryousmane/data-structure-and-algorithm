//
// Created by sanga on 17/04/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
        printf("Age: %associated_function\n", (*d).age);
        printf("Owner: %s\n", (*d).owner);
    }
}


typedef struct dog dog_t;



//dog_t *new_dog(char *name, float age, char *owner){
//
//    struct dog *d;
//
//    if (d == NULL)
//        return NULL;
//
//
//}

void free_dog(dog_t *d){
    if (!d){
        exit(98);
    }
    free(d);
}


/**
* new_dog - function
* @name: name of dog
* @age: age of new doggo
* @owner: owner of new doggo
*
* Description: function to create a new dog. Store copy of name & owner
* Return: ptr, null if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    char *new_dog_name, *new_dog_owner;
    int name_length, owner_length;

    dog_t *new_dog = malloc(sizeof(dog_t));

    if (!new_dog)
        return (NULL);

    strlen(name);
    name_length = strlen(name);
    new_dog_name = malloc((name_length + 1) * sizeof(char));

    if (!new_dog_name)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(new_dog_name, name);

    strlen(owner);
    owner_length = strlen(owner);
    new_dog_owner = malloc(sizeof(char) * (owner_length + 1));
    if (new_dog_owner == NULL)
    {
        free(new_dog_name);
        free(new_dog);
        return (NULL);
    }
    strcpy(new_dog_owner, owner);

    (*new_dog).name = new_dog_name;
    (*new_dog).age = age;
    (*new_dog).owner = new_dog_owner;

    return (new_dog);
}

void show() {
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

}
