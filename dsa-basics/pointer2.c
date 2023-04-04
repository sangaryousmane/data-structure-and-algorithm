//
// Created by sanga on 03/04/2023.
//

#include <stdio.h>

// This C file demonstrates a pointer to a pointer or double pointer

int mimic_pointer_to_pointer() {
    int var = 9000;
    int *ptr;
    int **pptr;

    ptr = &var;
    pptr = &ptr;
    printf("Value of var is: %d\n", var);
    printf("Value of *ptr is: %d\n", *ptr);
    printf("Value of **pptr is: %d\n", **pptr);
    return 0;
}

int two_2_array() {
    int a[3][2] = {
            {2,  3},
            {10, 13},
            {11, 14}};

    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 2; column++) {
            if (a[row][column] % 2 == 0) {
                continue;
            } else {
                printf("%d ", a[row][column]);
            }
        }
    }
    return 0;
}

int two_2_array2() {
    int array_2D[2][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8}};

    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 4; column++) {
            printf("Please enter array: array_2D[%drow][%dcolumn]", row, column);
            scanf("%d", &array_2D[row][column]);
        }
    }
    return 0;
}

// Write a function that fills memory with a constant byte.
// mimic memset and return the string pointer

char *do_memset(char *s, char b, int n) {
    unsigned int count = 0;

    for (; count < n; count++) {
        s[count] = b;
    }
    return s;
}

// Write a function that copies memory area.
// The _memcpy() function copies n bytes from memory area src to memory area dest
char *do_memcpy(char *dest, char *src, int n) {
    unsigned int count = 0;
    while (count < n) {
        *(dest + count) = src[count]; // copying the value in src to dest
        count++;
    }
    return (dest);
}

// Write a function that locates a character in a string.
char *do_strchr(char *s, char c) {

   int index = 0; // Initialize the index at 0

    while (s[index] >='\0'){   // Loop as long the string is not end
        if (s[index] == c) { // check for the occurrence of the character c in the string
            return &s[index]; // return if found
        }
        index++;    // increment to the next
    }
    return (NULL);   // return null if not
}


unsigned int do_strspn(char *s, char *accept){
    unsigned int bytes = 0;
    int i, j;

    for (i = 0; s[i] > '\0'; i++){  // Goes through each letter of the word s
        for (j = 0; accept[j] > '\0'; j++){  // Goes through each letter of the word accept
            if (s[i] == accept[j]){   // Check if any letter in s that is same as in accept
                bytes++;               // Add 1 to bytes if it is
                break;
            }
        }
        /*
         * The inner loop goes through each character of the string accept by checking if accept[j] is not equal to the null character ('\0'). If accept[j] is the null character, it means we have gone through all the characters in accept, and there is no need to continue the inner loop.
         *So, the condition if (!accept[j]) checks if accept[j] is the null character, and if it is, the break statement is executed, which breaks out of the inner loop. This saves time and resources by avoiding unnecessary iterations of the inner loop.
         */
        if (!accept[j]){
            break;
        }
    }
    return bytes;
}