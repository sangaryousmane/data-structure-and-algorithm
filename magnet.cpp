//
// Created by sanga on 19/02/2023.
//
#include <cstdio>
#include <cstdlib>


void hello(){
    puts("Hello world");
}


// magnets unmixed
void fixCode() {
    char cardName[3];

    printf("Enter card name");
    scanf("%2s ", cardName);

    int value=0;

    if(cardName[0] == 'K'){
        value = 10;
    }
    else if(cardName[0] == 'Q'){
        value = 10;
    }
    else if(cardName[0] == 'J'){
        value = 10;
    }
    else if(cardName[0] == 'A'){
        value = 11;
    }
    else{
        value = atoi(cardName);
    }
    printf("The card value is: %i\n", value);

}
