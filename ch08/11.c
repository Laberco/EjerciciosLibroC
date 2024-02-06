#include <stdio.h>
#include <ctype.h> // Para pode rutilziar toupper()

int main(void){
    char ch, message[15];
    int cont = 0;

    printf("Enter phone number: ");
    // Necesitamos comprobar la condicion antes de ejecutar el bucle
    // por eso utilizamos un bucle while
    while((ch = getchar()) != '\n'){
        switch(toupper(ch)){
            case 'A':case 'B':case 'C':
                message[cont++]= '2';
                break;
            case 'D':case 'E':case 'F':
                message[cont++]= '3';
                break;
            case 'G':case 'H':case 'I':
                message[cont++]= '4';
                break;
            case 'J':case 'K':case 'L':
                message[cont++]= '5';
                break;
            case 'M':case 'N':case 'O':
                message[cont++]= '6';
                break;
            case 'P':case 'R':case 'S':
                message[cont++]= '7';
                break;
            case 'T':case 'U':case 'V':
                message[cont++]= '8';
                break;
            case 'W':case 'X':case 'Y':
                message[cont++]= '9';
                break;
            default: // Si no contiene letras, se muestra el numero
                message[cont++]= ch;
        }
    }
    for(int i = 0; i < cont;i++)
        printf("%c",message[i]);

    return 0;
}