#include <stdio.h>

int main(void){
    int x, x5, x4, x3, x2;
    int sum;

    printf("Introduce un valor de x: ");
    scanf("%d", &x);

    x5 = x * x * x * x * x;
    x4 = x * x * x * x;
    x3 = x * x * x;
    x2 = x * x;

    sum = (3 * x5) + (2 * x4) - (5 * x3) - (x2) + (7*x) - 6;

    printf("El resultado de la operacion es: %d", sum);
     
    return 0;
}