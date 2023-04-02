#include <stdio.h>
#include <string.h>

int largest_of_three(int a, int b, int c);

int main(void) {
    int a, b, c;
    a = 972;
    b = -98;
    c = 0;
    largest_of_three(a, b, c);
    return 0;
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
        }
        else
            printf("%02d ", i);
            putchar(' ');
    }
    printf("\n");
    return 0;
}




