#include <stdio.h>
#include <string.h>

unsigned int do_strspn(char *a, char *b);
void print_diagsums1(int *a, int size);

char *do_that(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    printf("%d", len);
    return s;
}

int main(void) {
    int c3[3][3] = {
            {0, 1, 5},
            {10, 11, 12},
            {1000, 101, 102},
    };
    int c5[5][5] = {
            {0, 1, 5, 12124, 1234},
            {10, 11, 12, 123521, 12512},
            {1000, 101, 102, 12545, 214543435},
            {100, 1012451, 11102, 12545, 214543435},
            {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums1((int *)c3, 3);
    print_diagsums1((int *)c5, 5);
    return 0;
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




