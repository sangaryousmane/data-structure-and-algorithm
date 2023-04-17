//
// Created by sanga on 16/04/2023.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * Write a function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @param str
 * @return
 */
char *v2_strdup(char *str) {

    int len = 0;
    char *new_str;

    // Returns NULL if the input string is null
    if (str == NULL)
        return (NULL);

    while (str[len] != '\0') {
        len++;
    }

    new_str =(char *) malloc((len + 1) * sizeof(char));
    if (new_str == NULL) {
        return NULL;
    }

    for (int i = 0; i <= len; i++) {
        new_str[i] = str[i];
    }
    return new_str;
}

#include <string.h>
// Write a function that concatenates two string
char *str_concat(char *s1, char *s2){
    // Initialize a count var
    // Check if s1 and s2 aren't null
    // check a loop where s1 and s2 aren't null then concatenate
    // Initialize a new string to store concatenation
    // return concatenation

    int i = 0, j = 0;
    char *concat;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";


    while(s1[i] != 0){
        i++;
    }
    while (s2[j] !=0){
        j++;
    }
    concat = malloc((j+i +1) * sizeof(char));

    // Check whether the newly created string is null
    if (concat == NULL){
        free(concat);
        return NULL;
    }
    while (s1[i] != '\0' && s2[j] != '\0'){
        concat[i] = s1[i];
        concat[j] = s2[j];
        s1++;
        s2++;
    }
    return concat;

}