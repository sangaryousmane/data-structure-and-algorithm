#include <stdio.h>
#include <string.h>

int do_putchar(int a);
int two_2_array();
void pointers(int **add);

int main(void) {

    int add[2] = {3, 4};

    two_2_array();
    return 0;
}

void pointers(int **add) {
    printf("address of the array first element is: %p\n", (*add));
    printf("address of the array is: %p\n", add);
    printf("size of the array is: %lld\n", sizeof(*add));
    printf("size of the array address is: %lld\n", sizeof(add));
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




