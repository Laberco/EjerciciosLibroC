#include <stdbool.h>
#include <stdio.h>

int main(void){
    bool digit_seen[10] = {false}; // Inicializamos el array con todos los elementos en false
    int digit_rep[10] = {0}; // Inicializamos el array en cero
    int digit;
    long n;

    for(;;){
        printf("Enter a number: ");
        scanf("%ld", &n);
        if(n == 0)
            break;
        while(n > 0){
         digit = n % 10;
            digit_rep[digit]++;
         n /= 10;
    }
    }
    printf("%-15s0  1  2  3  4  5  6  7  8  9\n", "Digit:");
    printf("%-15s", "Occurences:");
    for(int i = 0; i < 10; i++){
        printf("%-3d", digit_rep[i]);
    }

    return 0;
}