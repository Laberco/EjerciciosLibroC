#include <stdio.h>

int main(void){
    int i, n;
    long double factorial = 1.0f;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        factorial *= i;
    }

    printf("Factorial of %d: %.0lf", n, factorial);

    return 0;
}