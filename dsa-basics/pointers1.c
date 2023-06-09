//
// Created by sanga on 03/04/2023.
//
#include <stdio.h>

int all() {
    int n = 10;
    int *p = &n;

    int size = sizeof(&p);

    printf("address of p is: %p,  size"
           " is: %d and value is: %d\n", &p, size, *p);

    *p = 50;
    printf("Value of pointer afterwards: %d\n", *p);
    return 0;
}

int sum() {
    int n = 5;
    int *a = &n;
    a[1] = 40;
    printf("The result is %d\n", *a + a[1]);
    return 0;
}

void reset_to98(int *n) {
    *n = 98;

}

// Swap two numbers in C
void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

int v2_strlen(char *s) {
    int i = 0, len = 0;

//    while (s[i] !=0){
//        len++;
//        s++;
//    }
//    return len;

    do{
        len +=1;
        s++;
    } while (s[i] !=0);
    return len;
}

void v2_puts(char *str) {
    puts(str);
}

void v2_print_rev(char *s) {

    int i = 0;

    while (s[i] != 0){
        i++;
    }

    int end = i - 1, index=end;


    for (index = index; index >= 0; index--){
        putchar(s[index]);
    }
    putchar('\n');

//    int i = 0;
//    printf("Before\n%s\n", s);
//
//    for (; s[i] != 0; i++);
//
//    int end = i - 1;
//    int index = end;
//    printf("After\n");
//
//    while (index >= 0) {
//        putchar(s[index]);
//        index--;
//    }
//    putchar('\n');



}

// Reverse a string
void v2_rev_string(char *s) {

    int len = v2_strlen(s);
    int start = 0, end = len - 1;

    while (start < end){
        char temp;
        temp =s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }


}

/**
 * Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @param str
 */
#include <stdlib.h>
void v2_puts2(char *str) {

    for (int i = 0; str[i] != 0; i +=2) {
        if (str[i] < '0' || str[i] > '9')
            exit(98);
        else
            putchar(str[i]);
    }

//    int i = 0;
//
//    while (str[i] != 0){
//        putchar(str[i]);
//        i +=2;
//    }
      putchar('\n');

}

void v2_puts_half(char *str){
    int length = v2_strlen(str);
    int start, half = length / 2;

    // If the length of the string is even
    if (length % 2 == 0){
        start = half;
    } else{
        start = half + 1;
    }

    int i = start;
    while (i < length){
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}
/**
 * Write a function that prints n elements of an array of integers,
 * followed by a new line.
 */
void v2_print_array(int *a, int n){
    int i = 0;

    while (i < n){
        printf("%d, ", *(a+i));
        i++;
    }

}
/**
 * Write a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @param dest
 * @param src
 * @return
 */
char *v2_strcpy(char *dest, char *src){
    int i = 0, j = 0;

    while (src[i] != 0){
        i++;
    }

    while (j < i){
        dest[j]=src[j];
        j++;
    }
    dest[i] = '\0';
    return dest;
}