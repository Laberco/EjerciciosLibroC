#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int points = 0;
    int values[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,
    1,1,1,1,4,4,8,4,10};

    printf("Enter a word: ");
    while((ch = getchar()) != '\n'){
        points += values[toupper(ch) - 'A'];
    }

    printf("Scrabble value: %d", points);
    return 0;
}