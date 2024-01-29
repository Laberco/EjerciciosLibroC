#include <stdio.h>

int main(void){
    float importeTotal, intereses, pagoMensual;

    printf("Introduce el importe del prestamo: ");
    scanf("%f", &importeTotal);
    printf("Introduce los intereses: ");
    scanf("%f", &intereses);
    printf("Introduce el pago mensual");
    scanf("%f", &pagoMensual);

    intereses = ((intereses / 100) / 12) + 1; // Creamos el porcentaje de los intereses

    importeTotal *= intereses;
    importeTotal -= pagoMensual;
    printf("Balance despues del primer pago %.2f\n", importeTotal);

    importeTotal *= intereses;
    importeTotal -= pagoMensual;
    printf("Balance despues del segundo pago %.2f\n", importeTotal);

    importeTotal *= intereses;
    importeTotal -= pagoMensual;
    printf("Balance despues del segundo pago %.2f\n", importeTotal);

}