//
// Created by sanga on 30/03/2023.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Write a function that concatenates two string
/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
*
* Return: void
*/
char *do_strcat(char *dest, char *src) {
    int i;


    i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j;
    for (j = 0; src[j] != '\0'; j++) {
        dest[i + j] = src[j];
    }

    dest[i + j] = '\0';
    return dest;
}

/**
 * _isalpha - checks for alphabets
 * @c: character to check
 * Return: 0 if c is not an alpha, 1 otherwise
 */
int _isalpha(int c) {
    return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

/**
 * _strncpy - copy a byte number of string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n) {
    int j;
    j = 0;
    while (j < n && src[j] != '\0') {
        dest[j] = src[j];
        j++;
    }
    while (j < n) {
        dest[j] = '\0';
        j++;
    }
    return (dest);
}

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c) {
    if (c >= 48 && c <= 57) {
        return (1);
    } else {
        return (0);
    }
}

/**
* _isupper - check for lower and uppercase letters
*@c: the parameter to the _isupper function
* Return: 0 if @c is lowercase , 1 otherwise
*/
int _isupper(int c) {
    if (c >= 65 && c <= 90) {
        return (1);
    }
    return (0);
}

/**
* _islower - check for lowercase
* @c: the parameter to the _islower function
* Return: 1 if @c is lowercase , 0 otherwise
*/
int _islower(int c)
{
    if (c >= 97 && c <= 122)
    {
        return (1);
    }
    return (0);
}


// Write a function that concatenates two string
// with a byte number

char *do_strncat(char *dest, char *src, int n) {
//    // first solution
//    char *result = strncat(dest, src, n);
//    return result;
    int index = 0, dest_len = 0;
    while (dest[index]) { // This loop gets the size of the destination string
        dest_len++;
        index++;
    }
    // This loop assigns the src string to the destination until it reaches the null character
    for (index = 0; src[index] && index < n; index++) {
        dest[dest_len++] = src[index];
    }
    dest[dest_len] = '\0'; // Adds the end character to the destination string
    return dest; // Returns a pointer to the destination string
}

// Write a function that copies one string to another
// Mimic the strncpy function
char *do_strncpy(char *dest, char *src, int n) {
    int i;

    /** This loop is used to copy the specified number of characters
    * from the source string to the destination string
     * The loop starts at the index i equal to 0,
     * which is the first character of the source string, and continues until i is less than n and the current character
     * of the source string is not a null character. During each iteration of the loop,
     * the current character of the source string is copied to the corresponding index of the destination string.
     * This ensures that only the specified number of characters are copied from the source string
     * to the destination string, and the destination string is null-terminated after the last copied character.
    */
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // The loop for (; i < n; i++) { dest[i] = '\0'; } in the strncpy() function is used to pad the destination
    // string with null bytes if the source string is shorter than the specified number of characters to copy.
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}


int do_strcmp(char *str1, char *str2) {
    //The loop condition *str1 checks if the current character in str1 is not the null character,
// which marks the end of the string[1].The condition *str1 == *str2 checks if the current
// characters in both strings are equal[1][2]. If both conditions are true,
// the loop continues and increments the pointers str1 and str2 to compare the next characters[1][2].
// If either condition is false, the loop exits and the function returns an integer value based on the comparison of the last characters[1][2].
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

void print_array(int *a, int n);

// Write arr function that reverses the content of an array of integers.
void reverse_array(int *a, int n) {
    int temp, i;
    for (i = n - 1; i > n / 2; i--) {
        temp = a[n - 1 - i];
        a[n - 1 - i] = a[i];
        a[i] = temp;
    }
}

void reverse_array1(int *a, int n) {
    int i, temp;

    for (i = n - 1; i > n / 2; i--) {
        temp = a[n - 1 - i]; // Update the temp value with the opposite value
        a[n - 1 - i] = a[i];  // add the start value to the opposite value
        a[i] = temp;  // Update the start variable to the temp one
    }
}

#include <stdio.h>

char *string_toupper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}

/**
 * cap_string - is use to capitalize first letter of each word
 * @str: the pointer
 * Return: a pointer to the @str array
 */
char *cap_string(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        // Capitalize the first letter of each word
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
            str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
            str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
            str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
            str[i - 1] == '}') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A';
            }
        }
        i++;
    }
    return str;
}

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s) {
    int i, j;
    char a[] = "aAeEoOtTlL";
    char b[] = "4433007711";

    for (i = 0; *(s + i); i++) {
        for (j = 0; j <= 9; j++) {
            if (a[j] == *(s + i))
                *(s + i) = b[j];
        }
    }
    return (s);
}


/**
 * rot13 - Write a function that encodes a string using rot13.
 * @str: pointer to an array
 * Return: pointer to @str
 */
char *rot13(char *str) {
    int i, j;
    char entry1[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char entry2[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; str[i] != '\0'; ++i) {
        for (j = 0; entry1[j] != '\0'; j++) {
            if (str[i] == entry1[j]) {
                str[i] = entry2[j];
                break;
            }
        }

    }
    return (str);
}


/**
 * print_buffer - prints a buffer to output
 * @b: a pointer that points to char array
 * @size: int that hold size
 * Return: nothing
 */

void print_buffer(char *b, int size) {

    int outer, inner;

    outer = 0;

    while (outer < size) {
        printf("%08x: ", outer);
        for (inner = outer; inner < outer + 10; inner++) {
            if (inner < size) {
                printf("%02x", (unsigned char) b[inner]);
            } else {
                printf("  ");
            }
            if (inner % 2) {
                putchar(' ');
            }
        }
        for (inner = outer; inner < outer + 10; inner++) {
            if (inner >= size) {
                break;
            }

            if (b[inner] >= ' ' && *(b + inner) <= '~') {
                putchar(*(b + inner));
            } else {
                putchar('.');
            }
        }
        outer += 10;
        if (outer < size) {
            putchar('\n');
        }
    }
    putchar('\n');
}


/**
* _strstr - locates a substring
* @haystack: the string to search
* @needle: first occurence to find
* Return: pointer to the beginning of string
*/
char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        char *l = haystack;
        char *p = needle;
        while (*l == *p && *p != '\0')
        {
            l++;
            p++;
        }
        if (*p == '\0') {
            return (haystack);
        }
        haystack++;
    }
    return (0);
}


