#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *duplicate(char *str){
    // Primero necesitamos calcular la longitud de la cadena
    size_t len = strlen(str); // No cuenta en null caracter
    // Una vez conocemos el tamaño de la cadena, reservamos el espacio
    void *p = malloc(len + 1); /* Reservamos tamaño para una cadena de n caracteres mas
    el caracter NULL*/
    if(p == NULL){
        //Si falla la asignacion de espacio
        printf("Fallo al intentar reservar la memoria con malloc");
        exit(EXIT_FAILURE);
    }
    // Tenemos que copiar la cadena en el espacio de memoria reservado
    strcpy(p,str); // Copiamos la cadena str en el bloque de memoria reservado el cual es 
    // apuntado por p
    return p;
}


// Probamos que funcione
int main(void){
    char *p = "Cadena de prueba";
    char *copia = duplicate(p);

    printf("Cadena original: %s\n", p);
    printf("Cadena duplicada: %s\n", copia);

    return 0;
}