//
// Created by sanga on 27/03/2023.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
// Takes a pointer and update it value to 98
void reset_to_98(int *n) {
    *n = 98;
}

// swaps two numbers
void swap_int(int *a, int *b) {

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Return the length of a string
int do_strlen(char *s) {
    return strlen(s);
}

void do_puts(char *s) {
    puts(s);

}

// Print a string in reverse
void print_rev(char *s) {
    int index;
    index = 0;

    printf("%s\n", s);
    // iterate over string until it reaches null character('\0')
    while (s[index] !=0){
        index++;
    }

    // Iterate from the last character to the first and output in reverse order
    for(index = index -1; index >=0; index--){
        putchar(s[index]);
    }
    putchar('\n'); // Print a newline

}
int to_strlen(char *s){
    int i, count = 0;
    for(i = 0; s[i] !='\0'; i++){
        count++;
    }
    return count;
}

/**
* rev_string - Reverse a string
* @s: is the string pointed to
* Return nothing
*/
void rev_string(char *s) {

    unsigned int i;
    char temp;
    size_t length = strlen(s);

    for(i = 0; i < length /2; i++){
        temp = s[i]; // temp = 'h'
        s[i] = s[length - i -1];  // s[i] = h
        s[length - i - 1] = temp;  // s[i-length-1] = e

    }

}

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line
 * This can also be printing characters with even number of index start with first char
 * @str: The string
 * Return: Nothing
 */
void puts2(char *str){
    int i;

    for (i = 0; str[i] != '\0'; i++){
        if (i % 2 == 0){
            putchar(str[i]);
        }
    }
    putchar('\n');
}

/**
 * puts_half - prints first half of a string
 * @str : is the param of the function
 * Return nothing
 */
void puts_half(char *str){
    int length = strlen(str);
    int half = length / 2;
    int i;
    if (length % 2 != 0){
        half++;
    }
    for (i = half; i < length; i++){
        putchar(str[i]);
    }
    putchar('\n');
}
void print_array(int *a, int n) {

    int i;
    for (i = 0; i < n; i++) {
        if (i != n - 1)
            printf("%d, ", a[i]);
        else
            printf("%d", a[i]);

    }
    printf("\n");
}

char *do_strcpy(char *dest, char *src) {
    return strcpy(dest, src);
}


/**
* _atoi - convert a string to an int
* @s: the string to be converted
* Return: the converted int
*/
int do_atoi(char *s) {
    int sign = 1;
    unsigned int num = 0;
    do {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
            num = num * 10 + (*s - '0');
        else if (num > 0)
            break;
    } while (*s++);
    return (num * sign);
}

/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int crackme_password(void)
{
    char c;
    int x;

    srand(time(0));
    while (x <= 2645)
    {
        c = rand() % 128;
        x += c;
        putchar(c);
    }
    putchar(2772 - x);
    return (0);
}