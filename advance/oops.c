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
}Phone;

typedef struct Location{
    char *state;
    long zipCode;
    char *country;
} Location;

struct Movie{
    char *name;
    double start_time;
    char *series;
    Location location;
};

int display() {
    struct User *user;
    user = new_user("Ousmane Sangary", "sangary@gmail.com", 24);
    if (user == NULL)
        return 1;

    printf("Name: %s\n", user->name);
    printf("Email: %s\n", user->email);
    printf("Age: %d\n", user->age);

    Phone phone;

    printf("Brand Name: %s\n", phone.brand);
    printf("Ram: %d\n", phone.ram);
    printf("Storage: %d\n", phone.storage);

    return 0;
}

int show_Me(){
    struct Movie movie;
    Location location;


    location.country = "USA";
    location.state = "California";
    location.zipCode = 420021;

    movie.name="Journey to the west";
    movie.series="American";
    movie.start_time = 11.0;
    movie.location = location;

    printf("ZipCode: %ld", movie.location.zipCode);
    printf("Address: %s", movie.location.country);
    return 0;
}