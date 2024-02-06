#include <stdio.h>
#include <ctype.h>

int main(void){
    char message[50];
    int size = 0;
    char ch;

    // Primero guardamos el mensaje introducido
    printf("Enter message: ");
    while((ch = getchar()) != '\n'){
        message[size++] = toupper(ch);
    };

    // Tenemos el array mensaje guardado en el array. La variable
    // size indica el tamaño del emnsaje que se ha guardado

    /* Recorremos el array cambiando las letras*/

    for(int i = 0; i < size; i++){
        switch(message[i]){
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", message[i]);
                break;
        }
    }
    printf("!!!!!!!!!!");

    return 0;
}