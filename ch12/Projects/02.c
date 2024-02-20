/* Tenemos que primero almacenar el array, creamos una funcion para conseguirlo
Ya creamos una funcion para leer el mensaje, ahora, lo que tenemos que hacer es
recorrer desde los extremos hacia que se encuentren en el medio, y mientras avanza vamos
comparando las palabras para ver si son iguales, si no coinciden, dejamos de recorrer el bucle*/


#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 50

int read_message(char message[], int n);
bool check_palindrome(char message[], int n);
void printf_message(char message[], int n);



int main(void){
    char message[N];
    int message_lenght = read_message(message, N);
    //printf_message(message, message_lenght);
    printf("%spalindrome", (check_palindrome(message, message_lenght) ? "" : "Not a "));

    return 0;

}

// Función para leer el mensaje
int read_message(char message[], int n){
    char ch;
    int i = 0;
    printf("Enter a message: ");
    for(;;){
        ch = getchar();
        if(ch == '\n' || i == 50)
            break;
        else
            if(tolower(ch) >= 'a' && tolower(ch) <= 'z')
            // Asi nos aseguramos de que solo cojemos letras y no otros simbolos
                message[i++] = tolower(ch);
    }
    return i;
}

/* Funcion que recorre el array y comprueba si es un palindromo*/
bool check_palindrome(char message[], int n){
    char *inicio, *fin; //Punteros para recorrer el array
    inicio = message;
    fin = message + n - 1;
    while(inicio < fin){
        if(*inicio++ != *fin--)
            return false;
    }
    return true;
}

// Funcion para mostrar los mensajes
void printf_message(char message[], int n){
    char *p;
    for(p = message; p < message + n; p++)
        printf("%c", *p);
}