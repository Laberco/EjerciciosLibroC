#include <stdio.h>

int main(void){
    // Tenemos que guardar los datos introducidos en una array de dos dimensiones 5x5

    int data[5][5], row_total, col_total;

    // Guardamos los datos indroducidos
    for(int row = 0; row < 5; row++){
            printf("Enter row %d: ", row +1);
            scanf("%d %d %d %d %d", &data[row][0], &data[row][1], &data[row][2], 
                                    &data[row][3], &data[row][4]);
    }
    // Ya tenemos el array guardado con los datos introducidos por el ususario
    // Ahora hacemos la soperaciones necesarias para calcular lso datos oslicitados

    printf("Row totals: ");
    for(int row = 0; row < 5; row++){
        row_total = 0;
        for(int col = 0; col < 5; col++){
            row_total += data[row][col];
        }
        printf("%d ", row_total);
    }

    printf("\nColumn totals: ");
    for(int column = 0; column < 5; column++){
        col_total = 0;
        for(int row = 0; row < 5; row++){
            col_total += data[row][column];
        }
        printf("%d ", col_total);
    }

    return 0;
}