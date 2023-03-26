#include <stdio.h>


int is_digit(int n);

int main() {

    char c = '3';
    printf("%c: %d\n", c, is_digit(c));
    puts("\nDONE!!");
    return 0;
}