#include <stdio.h>
#include <ctype.h> // Para pode rutilziar toupper()

int main(void){
    char ch;

    printf("Enter phone number: ");
    // Necesitamos comprobar la condicion antes de ejecutar el bucle
    // por eso utilizamos un bucle while
    while((ch = getchar()) != '\n'){
        switch(toupper(ch)){
            case 'A':case 'B':case 'C':
                printf("2");
                break;
            case 'D':case 'E':case 'F':
                printf("3");
                break;
            case 'G':case 'H':case 'I':
                printf("4");
                break;
            case 'J':case 'K':case 'L':
                printf("5");
                break;
            case 'M':case 'N':case 'O':
                printf("6");
                break;
            case 'P':case 'R':case 'S':
                printf("7");
                break;
            case 'T':case 'U':case 'V':
                printf("8");
                break;
            case 'W':case 'X':case 'Y':
                printf("9");
                break;
            default: // Si no contiene letras, se muestra el numero
                putchar(ch);
        }
    }

    return 0;
}