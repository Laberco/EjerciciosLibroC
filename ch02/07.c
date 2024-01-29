#include <stdio.h>

int main(void){
    int total, billete20, billete10, billete5, billete1;

    printf("Introduce un importe: ");
    scanf("%d", &total);

    billete20 = total / 20;
    total -= billete20 * 20;
    billete10 = total / 10;
    total -= billete10 * 10;
    billete5 = total / 5;
    total -= billete5 * 5;
    billete1 = total / 1;
    
    printf("$20 bills: %d\n", billete20);
    printf("$10 bills: %d\n", billete10);
    printf(" $5 bills: %d\n", billete5);
    printf(" $1 bills: %d\n", billete1);

    return 0;
}