#include <stdio.h>
#include <string.h>


char *string_toupper(char *a);
int _islower(int n);
int _isdigit(int c);
char *_strstr(char *s, char *c);
char *do_that(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    printf("%d", len);
    return s;
}

int main(void) {
    char c;


    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}


void simple_print_buffer(char *buffer, unsigned int size) {
    unsigned int i;

    i = 0;
    while (i < size) {
        if (i % 10) {
            printf(" ");
        }
        if (!(i % 10) && i) {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}


int print_double_combination_numbers() {
    int i;
    for (i = 0; i < 100; i++) {
        if (i == 89) {
            continue;
        }
        if (i < 99) {
            printf("%02d ", i);
            putchar(',');
        } else
            printf("%02d ", i);
        putchar(' ');
    }
    printf("\n");
    return 0;
}




