#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
int testing();
int main(int argc, char* argv[]) {

    testing();
//    printf("This program was called with : %s\n", argv[0]);
//    printf("%s\n", argv[argc]);
//
//    //
//    printf("Let's see what is in argv\n");
//
//    int i = 1, sum = 0;
//
//    if (argc > 1){
//        for (; i < argc; i++){
//            printf("Argv[%d] = %s\n", i, argv[i]);
//            sum += atoi(argv[i]);
//        }
//        printf("Total argument passed is: %d\n ", sum);
//    }

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




