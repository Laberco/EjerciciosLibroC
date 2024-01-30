#include <stdio.h>

int main(void){
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
    first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    // Indicando %1d, indicamos ascanf que el campo tiene un tamaño de 1
    // caracter. De forma que scanf, solo lee un caracter y lo guarda en 
    // la variable correspondiente.
    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;

    total = (first_sum * 3) + second_sum;
    total = 9 - ((total - 1) % 10);

    printf("Check digit: %d", total);

    return 0;
}