#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int points = 0;

    printf("Enter a word: ");
    while((ch = getchar()) != '\n'){
        switch(toupper(ch)){
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case '0': case 'R': case 'S': case 'T': case 'U':
                points += 1;
                break;
            case 'D': case 'G':
                points += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                points += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                points += 4;
                break;
            case 'K':
                points += 5;
                break;
            case 'J': case 'X':
                points += 8;
                break;
            case 'Q': case 'Z':
                points += 10;
                break;
        }
    }

    printf("Scrabble value: %d", points);
    return 0;
}