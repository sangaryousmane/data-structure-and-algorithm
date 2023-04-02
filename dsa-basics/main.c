#include <stdio.h>
#include <string.h>

int do_putchar(int a);
int print_last_digit(int a);
int main(void) {

    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    do_putchar('0' + r);
    do_putchar('\n');
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




