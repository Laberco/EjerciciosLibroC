#include <stdio.h>

#define N 50

int read_message(char a[], int n);
void print_message(char a[], int n);
void print_message_reverse_subscript(char a[], int n);
void print_message_reverse_pointer(char a[], char *a_last);


int main(void){
    char message[N];

    // Utilizamos una funcion para leer el mensaje y como no tiene por que tener 
    // el tamaño maximo, hacemos que devuelva el tamaño del mensaje introducido
    int message_length = read_message(message, N);
    print_message(message, message_length);
    print_message_reverse_subscript(message, message_length);
    print_message_reverse_pointer(message, &message[message_length - 1]);

    return 0;
}

int read_message(char a[], int n){
    char ch;
    int i = 0;
    printf("Enter a message: ");
    for(;;){
        ch = getchar();
        if(ch == '\n' || i == 50)
            break;
        else
            a[i++] = ch;
    }
    return i;
}   

void print_message(char a[], int n){
    char *p;
    for(p = a; p < a + n; p++)
        printf("%c", *p);
    printf("\n");
}

// Creamos una funcion para mostrar el array a la inversa
void print_message_reverse_subscript(char a[], int n){
    int i;
    for(i = n; i >= 0; i--){
        printf("%c", a[i]);
    }
    printf("\n");

}

// Recreamos la funcion pero utilizando un puntero para recorrer el array
void print_message_reverse_pointer(char a[], char *a_last){
    /* Teneos que recorrer el array a la inversa, el puntero tiene que empezar al final del arrat*/
    char *p;
    p = a_last;
    while(p >= a){
        printf("%c", *p--);
    }
    printf("\n");
}