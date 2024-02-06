#include <stdbool.h>
#include <stdio.h>

int main(void){
    bool digit_seen[10] = {false}; // Inicializamos el array con todos los elementos en false
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digits(s): ");
    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit])
            printf("%d ", digit);
        digit_seen[digit] = true;
        n /= 10;
    }
    /* Como tenemos guardado en el array que digitos se repiten, lo utilizamos
    para mostra rlos digitos repetidos*/


    return 0;
}