#include <stdio.h>
#include <string.h>

int do_putchar(int a);
int do_isalpha(int a);
int main(void) {

    int result = do_isalpha('e');
    putchar(result + '0');
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




