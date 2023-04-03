#include <stdio.h>
#include <string.h>

char *do_strchr(char *a, char b);
void simple_print_buffer(char *a, unsigned int n);

char *do_that(char *s){
    int len =0;
    while (s[len] !='\0') {
        len++;
    }
    printf("%d", len);
    return s;
}
int main(void) {
    char *s = "hello";
    char *f;

    f = do_strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    return 0;
}



void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
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
        }
        else
            printf("%02d ", i);
            putchar(' ');
    }
    printf("\n");
    return 0;
}




