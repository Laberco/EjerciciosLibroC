#include <stdio.h>

int main(void){
    float money;

    printf("Introduce un importe (xx.xx): ");
    scanf("%f", &money);

    printf("El importe con impuestos es: %.2f", (money + (money * 0.05f)));

    return 0;
}