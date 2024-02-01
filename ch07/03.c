/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void){
    double n, sum = 0;
    // Al modifical el tipo de dato, tenemos que modificar el 
    // especificador de conversion en las funciones scanf y printf

    printf("This program sums a series of integers. \n");
    printf("Enter integers (0 to terminate): ");
    scanf("%lf", &n); // Leemos una variable tipo long
    while(n != 0){
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %.2lf\n", sum);

    return 0;
}