//
// Created by sanga on 17/04/2023.
//
#include <stdio.h>
#include <stdlib.h>
struct User {
    char *name;
    char *email;
    int age;
};

struct User *new_user(char *name, char *email, int age) {
    struct User *user;

    user = malloc(sizeof(struct User));

    if(!user)
        return NULL;

    user->name=name;
    user->email=email;
    user->age=age;
    return user;
}

typedef struct Phone{
    char *brand;
    int ram;
    int storage;
}phone;


int display() {
    struct User *user;

//    user.name = "Ousmane Sangary";
//    user.email = "sangary@gmail.com";
//    user.age = 24;

    user = new_user("Ousmane Sangary", "sangary@gmail.com", 24);

    if (user == NULL)
        return 1;

    printf("Name: %s\n", user->name);
    printf("Email: %s\n", user->email);
    printf("Age: %d\n", user->age);
    return 0;
}
