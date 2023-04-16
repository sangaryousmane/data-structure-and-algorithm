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

char *create_array(unsigned int size, char c){

    char *new_arr;
    unsigned int i = 0;
    if (size == 0)
        return NULL;

    // Dynamically allocate memory for the new character
    new_arr = malloc(sizeof(char) * size);

    if (new_arr == NULL)
        return NULL;

    while (i < size){
        new_arr[i] = c;
        i++;
    }
    return new_arr;
}
int tired(int n){
    if (n == 0)
        return 0;
    else
        return n;
}
char *success(char *s){
    return s;
}

// TODO: DAY 1, YOU'RE WELCOME TO JOIN WITH ANY LANGUAGE
// TODO: BUT FOR US, WE WILL DEEPEN OUR UNDERSTANDING OF C INSTEAD
int code100Days(int days){

        if (days >= 60) {
            printf("Congrats! switch to Python.\n");
        }
        else {
            printf("keep going champ!");
        }
    return 0;
}


/**
 * alloc_grid - make grid
 * @width: width
 * @height: height
 * Return: a pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height) {
    int **arr2D;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    arr2D = malloc(sizeof(int *) * height);

    if (arr2D == NULL)
        return (NULL);

    i = 0;
    while ( i < height) {
        arr2D[i] = malloc(sizeof(int) * width);

        if (arr2D[i] == NULL) {
            for (; i >= 0; i--)
                free(arr2D[i]);

            free(arr2D);
            return (NULL);
        }
        i++;
    }
    i = 0;
    while (i < height) {
        for (j = 0; j < width; j++)
            arr2D[i][j] = 0;
        i++;
    }

    return (arr2D);
}


#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
    char *conct;
    int i, ci;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    i = ci = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[ci] != '\0')
        ci++;
    conct = malloc(sizeof(char) * (i + ci + 1));

    if (conct == NULL)
        return (NULL);
    i = ci = 0;
    while (s1[i] != '\0')
    {
        conct[i] = s1[i];
        i++;
    }

    while (s2[ci] != '\0')
    {
        conct[i] = s2[ci];
        i++;
        ci++;
    }
    conct[i] = '\0';
    return (conct);
}


#include <stdio.h>
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    char *clone, *relloc;
    unsigned int i;

    switch (ptr != NULL) {
        case 1:
            clone = ptr;
            break;
        case 0:
            return malloc(new_size);
    }

    switch (new_size == old_size) {
        case 1:
            return ptr;
    }

    switch (new_size == 0 && ptr != NULL) {
        case 1:
            free(ptr);
            return NULL;
    }

    relloc = malloc(new_size);
    if (relloc == NULL) {
        return NULL;
    }

    for (i = 0; i < (old_size || i < new_size); i++) {
        *(relloc + i) = clone[i];
    }

    free(ptr);
    return relloc;
}

#include <stdlib.h>
/*
 * _calloc - uses malloc to allocate memory for an array
 * @nmemb: number of memory block
 * @size: size of block
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *arr_mem;
    unsigned int len, i;

    len = nmemb * size;

    if (nmemb == 0 || size == 0)
        return (NULL);

    arr_mem = malloc(len);

    if (arr_mem == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
    {
        *((char *)arr_mem + i) = 0;
    }

    return (arr_mem);
}



/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max) {
    int *arr;
    int i;
    int size = max - min + 1;

    if (min > max)
        return (NULL);

    arr = malloc(size * sizeof(int));
    if (!arr)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min++;

    return (arr);
}


// TODO: DAY 2
int hello_C(){
    puts("This is day 2 of my journey to C");
    return 0;
}

//
//#include <stdlib.h>
//#include <unistd.h>
//#include <ctype.h>
//#define ERR_MSG "Error"
//
//int _putchar(int c){
//    return write(1, &c, 1);
//}
///**
// * main - takes two numbers as arguments and outputs the product.
// * @argc: the number of arguments including name of program.
// * @argv: an array of arguments
// *
// * Return: 0 if successful.
// */
//int main(int argc, char *argv[])
//{
//    int i = 0;
//    if (argc != 3)
//    {
//        while (ERR_MSG[i] !='\0'){
//            printf("%d", ERR_MSG[i]);
//        }
//        _putchar(10);
//        exit(98);
//    }
//    if (isdigit(argv[1]) == 0)
//        printf("%s\n", argv[1]);
//
//    return (0);
//}
//
///**
// * isdigit - checks if string is a number or not
// * @s: the string to be checked
// *
// * Return: 1 if true, else 0.
// */
//
//int isdigit(char *s)
//{
//    int i = 0;
//    while (s[i] !='\0')
//    {
//        if (s[i] < '0' || s[i] > '9')
//            return (1);
//        s++;
//    }
//    return (0);
//}


// TODO: DAY 3 of 100 days

int calculate_input(){

    char s;
    int num1, num2, result;
    printf("Please enter *, +, / and - to perform arithmetic\n");
    scanf("%c", &s);

    printf("Enter first number:\n");
    scanf("%d", &num1);

    printf("Enter second number:\n");
    scanf("%d", &num2);

    switch(s){
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d", num1, num2, result);
            break;
        case '/':
            if (num2 > 0) {
                result = num1 / num2;
                printf("%d / %d = %d", num1, num2, result);
                break;
            }
        default:
            printf("Your input is invalid, please enter valid number");
    }
}