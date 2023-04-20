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
void hi(int element){
    printf("%d\n", element);
}
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void show_result(){

    int arr[4] = {2, 5, 6, 4};
    array_iterator(arr, 4, &hi);
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

    if (name && f){
        f(name);
    }
}

// Write a function that executes a function given as a parameter on each element of an array.
void array_iterator(int *array, size_t size, void (*action)(int)){
    int i = 0;
    if (size > 0){
        while (i < size){
            action(array[i]);
            i++;
        }
    }
}

// Write a function that searches for an integer.
int int_index(int *array, int size, int (*cmp)(int)){
    int i = 0;

    // Check if the array size if positive
    if (size > 0){

        // Check whether array or function is null
        if (array != NULL && cmp != NULL){

            // Loop through the elements of the array
            for (; i<size; i++){

                // Compare the contents of the array
                if (cmp(array[i])) {

                    // Return the index of the array if found
                    return i;
                }
            }
        }
    }
    // Return -1 if none is found
    return -1;
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int bytes, i;
    char *arr;

    if (argc < 2)
    {
        printf("Error\n");
        return (1);
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    arr = (char *)main;

    for (i = 0; i < bytes; i++)
    {
        printf("%02hhx", arr[i]);
        if (i == bytes - 1)
            printf("\n");
        else
            printf(" ");
    }

    return (0);
}