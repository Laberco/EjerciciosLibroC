#include <stdio.h>
#include <ctype.h>


void printf_line(const char str[]);
int read_line_a(char str[], int n);
int read_line_b(char str[], int n);
int read_line_c(char str[], int n);


int main(void)
{
    char msg[20];
    printf("Enter a message: ");
    read_line_a(msg, 20);
    printf_line(msg);
    printf("Enter a message: ");
    read_line_b(msg, 20);
    printf_line(msg);
    printf("Enter a message: ");
    read_line_c(msg, 20);
    printf_line(msg);

    return 0;
}



// Funcion que salta los espacios antes de empezar a guardar los caracteres

int read_line_a(char str[], int n){
    int ch, i = 0;
    // Tenemos que saltar los espacios en blanco
    while((ch = getchar()) == ' '); // Saltamos los espacios en blanco
    do{
        if( i == n)
            break;
        str[i++] = ch;
    }while((ch = getchar()) != '\n');
    str[i] = '\0'; // Añadimos el caracter null para que sea un string

    return i;
}

// 
int read_line_b(char str[], int n){
    /* Que pare cuando encuentre el primer espacio en blanco.*/
    int ch, i = 0;
    // Saltamos los espacios en blanco
    while((ch = getchar()) == ' ');
    do{
        // Para no introduccir mas de n caracteres
        if( i == n)
            break;
        if(isspace(ch))
            break;
        str[i++] = ch;
    }while((ch = getchar()) !='\n' );
    str[i] = '\0'; // Añadimos el caracter null para formar la string

    return i;
}

//Fucion para mostrar el mensaje
void printf_line(const char msg[]){
    const char *p = msg;
    puts(msg);
}

// Parar cuando detecte el caracter de nueva linea, despues añadirlo
int read_line_c(char str[], int n){
    int ch, i = 0;

    /* Aprovechamos que el bucle do, se ejecuta una vez antes de hacer la compronacion
    de esta forma se detiene cuando detecta el caracter de nueva linea
    y lo añade*/
    do{
        ch = getchar();
        if(i < n)
            str[i++] = ch;
    }while(ch != '\n');
    str[i] = '\0';
    return i;
}