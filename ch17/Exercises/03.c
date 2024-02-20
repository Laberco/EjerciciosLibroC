#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value){
    // Tenemos que guardar un array de forma dinamica y inicializar todos los elementos al 
    //valor initial_value
    // Primero reservamos la memoria necesaria y comporbamos que malloc no da fallo
    // Los elementos del array son de tipo int

    int *array; // puntero al array
    array = malloc(n * sizeof(int));
    if(array == NULL){
        printf("Error al intentar reservar la memoria con malloc");
        exit(EXIT_FAILURE);
    }
    //Una vez reservamos la memoria, tenemos que inicializar los elementos del array
    for(int *p = array; p < array + n; p++){
        *p = initial_value;
    }

    return array;
}

int main(void){
    int *array = create_array(5, 10);

    for(int *p = array; p < array + 5; p++)
        printf("%d ", *p);

    printf("\n");
    free(array); //Liberamos el espacio

    return 0;
}