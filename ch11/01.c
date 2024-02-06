#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives,
                int *ones);

int main(void){
    int total, billete20, billete10, billete5, billete1;

    printf("Introduce un importe: ");
    scanf("%d", &total);

    pay_amount(total, &billete20, &billete10, &billete5, &billete1);

    
    printf("$20 bills: %d\n", billete20);
    printf("$10 bills: %d\n", billete10);
    printf(" $5 bills: %d\n", billete5);
    printf(" $1 bills: %d\n", billete1);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars / 20;
    dollars -= *twenties * 20;
    *tens = dollars / 10;
    dollars -= *tens * 10;
    *fives = dollars / 5;
    dollars -= *fives * 5;
    *ones = dollars / 1;
}