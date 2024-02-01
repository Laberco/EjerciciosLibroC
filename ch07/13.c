#include <stdio.h>
#include <ctype.h>

int main(void){
    float character_count = 0.0f, word_count = 0.0f;
    char ch;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n'){ /* Leemos palabras hasta el salto de linea*/
        /* Si detectamos 1 espacio, significa que se termino
        de introducir una palabra*/
        if(ch == ' '){
            word_count++;
            continue;
        }
        character_count++; /* Si no es un espacio, e sun caracter d euna palbra*/
    }
    word_count += 1; //last word isn't counted due to break on \n, so increment by one.
    printf("Average word length: %.1f", character_count / word_count);
    return 0;
}