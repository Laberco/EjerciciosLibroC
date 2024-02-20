#include <stdio.h>
#include <stdlib.h>

void *my_malloc(int n){
    // Tenemos que reservar un bloque de n bytes
    void *p; // Creamos un puntero que guardara la direccion de memoria

    p = malloc(n);
    if(p == NULL) {
        printf("Error, malloc failed\n");
        exit(EXIT_FAILURE);
    }
    // Si se ha podido reservar la memoria
    return p;
}

int main(void){
    char *p = my_malloc(10);

    return 0;
}