# Handle everything relating to higher level C

char *s;
unsigned int i = 0;

    if (size == 0){
        return NULL;
    }

    s = malloc(sizeof(char) * size);

    if (s == NULL) {
        return NULL;
    }

    while (i < size){
        s[i] = c;
        i++;
    }
    return s;