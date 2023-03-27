#include <stdio.h>
#include <string.h>

void do_puts(char *s);

int main() {

    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    strrev(str);
    do_puts(str);
    return 0;
}