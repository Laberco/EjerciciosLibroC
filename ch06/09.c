#include <stdio.h>

int main(void){
    float importeTotal, intereses, pagoMensual;
    int numPagos;

    printf("Introduce el importe del prestamo: ");
    scanf("%f", &importeTotal);
    printf("Introduce los intereses: ");
    scanf("%f", &intereses);
    printf("Introduce el pago mensual: ");
    scanf("%f", &pagoMensual);
    printf("Introduce el numero de pagos a realizar: ");
    scanf("%d", &numPagos);

    intereses = ((intereses / 100) / 12) + 1; // Creamos el porcentaje de los intereses

    for(int i = 0; i < numPagos; i++){
        importeTotal *= intereses;
        importeTotal -= pagoMensual;
        if(importeTotal < 0)
            break;
        printf("Balance despues del %d pago: $%.2f\n", i,importeTotal);
    }

    return 0;
}