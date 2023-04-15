#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *do_that(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    printf("%d", len);
    return s;
}


void v2_rev_string(char *s);
int main(int argc, char *argv[]) {

    char s[] = "My School is the best";

    printf("%s\n", s);
    v2_rev_string(s);
    printf("%s\n", s);

    return 0;
}

int sum_of_cmd(int argc, char *const *argv) {
    int i = 1, j, sum = 0;

    // J for the character and i for the argument itself
    while (i < argc) {
        j = 0;

        while (argv[i][j] != '\0') {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                printf("Error\n"); // print Error is it's not a digit
                return 1;  // Return 1 to indicate error
            }
            j++;  // Go to the next character
        }
        sum = sum + atoi(argv[i]); // Add numerical arguments
        i++;
    }
    printf("%d\n", sum); // Print the arguments to the console


}

int mul(int argc, char *const *argv) {
    int product = 0;

    if (argc <= 2) {
        printf("Error\n");
        return 1;
    }
    product = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", product);

    return (0);
}

void args2(int argc, char *const *argv) {
    int i = 1;

    if (argc > 1) {
        for (; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    }
}

void commandline_args(int argc, char *const *argv) {
    printf("This program was called with : %s\n", argv[0]);
    printf("%s\n", argv[argc]);

    //
    printf("Let's see what is in argv\n");

    int i = 1, sum = 0;

    if (argc > 1) {
        for (; i < argc; i++) {
            printf("Argv[%d] = %s\n", i, argv[i]);
            sum += atoi(argv[i]);
        }
        printf("Total argument passed is: %d\n ", sum);
    }
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


/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int h(int __attribute__((__unused__)) argc, char *argv[]) {
    printf("%s\n", argv[0]);

    return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int change_cent(int argc, char *argv[]) {
    int cents, coins = 0;

    if (argc != 2) {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    while (cents > 0) {
        coins++;
        if ((cents - 25) >= 0) {
            cents -= 25;
            continue;
        }
        if ((cents - 10) >= 0) {
            cents -= 10;
            continue;
        }
        if ((cents - 5) >= 0) {
            cents -= 5;
            continue;
        }
        if ((cents - 2) >= 0) {
            cents -= 2;
            continue;
        }
        cents--;
    }

    printf("%d\n", coins);

    return (0);

}