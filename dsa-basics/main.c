#include <stdio.h>
#include <string.h>

int do_putchar(int a);
void print_alphabet_x10();
int main(void) {

    print_alphabet_x10();
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




