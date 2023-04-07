//
// Created by sanga on 07/04/2023.
//
#include <stdio.h>

int is_lower_vowel(char letter) {

    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}

int is_upper_vowel(char letter) {

    switch (letter) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
        default:
            return 0;
    }
}

int vowel_count(char *c) {


    if (*c == '\0'){
        return 0;
    }
    int countVowel = vowel_count(c + 1);

    if (is_lower_vowel(*c) || is_upper_vowel(*c)){
        return countVowel +=1;
    }
    return countVowel;

}