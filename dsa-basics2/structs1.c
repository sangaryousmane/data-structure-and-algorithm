//
// Created by sanga on 05/04/2023.
//

#include <stdio.h>

struct Books{
    char *name;
    char *intend;
    int pages;
    char *type;
};



int access_books(){
    struct Books books;
    books.name = "Clean Code";
    books.pages = 192;
    books.type = "Programming book";
    books.intend = "To teach how to write clean codes";
    printf("Book name: %s\n", books.name);
    printf("Number of pages: %d\n", books.pages);
    printf("Book type: %s\n", books.type);
    printf("Intend is: %s\n", books.intend);
    return 0;
}