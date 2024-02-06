/* Nos piden que preguntemos el resultado de 5 examenes
para 5 estudiantes, es decir, tenemos que preguntar al usuario
la nota obtenida en cada examen por cada estudiante.
Despues, calculamos la nota media de cada estudiante y la nota media,
mas alta y mas baja de cada examen*/

#include <stdio.h>

int main(void){
    // Tenemos que guardar los datos introducidos en una array de dos dimensiones 5x5

    int data[5][5], row_total, col_total;
    int avg_test, max_test, min_test;

    // Preguntamos la nota de cada examen para cada estudiante
    for(int row = 0; row < 5; row++){
            printf("Introduce la puntuacion de los 5 examenes para el estudiante  %d: ", row +1);
            scanf("%d %d %d %d %d", &data[row][0], &data[row][1], &data[row][2], 
                                    &data[row][3], &data[row][4]);
    }
    // Ya tenemos el array guardado con los datos introducidos por el ususario
    // Ahora hacemos la soperaciones necesarias para calcular lso datos oslicitados

    printf("La nota obtenida por cada estudiante es: ");
    for(int row = 0; row < 5; row++){
        row_total = 0;
        for(int col = 0; col < 5; col++){
            row_total += data[row][col];
        }
        printf("Estudiante %d: nota total: %d nota media: %.2f:\n",row+1, row_total, (float)row_total/5);
    }

    /* Tenemos que otener la nota media, la mas alta y la mas baja de cada examen. Para
    eso tendremos que recorrer las columnas*/
    for(int row = 0; row < 5; row++){
        max_test = data[row][0];
        min_test = data[row][0];
        avg_test = 0;
        for(int col = 0; col < 5; col++){
            avg_test += data[row][col];
            if(data[row][col] > max_test)
                max_test = data[row][col];
            if(data[row][col] < min_test)
                min_test = data[row][col];
        }
        printf("Examen %d: Nota mas alta: %d. Nota mas baja: %d. Nota media: %.2f\n",
        row+1,max_test, min_test, (float)avg_test / 5);
    }


    return 0;
}