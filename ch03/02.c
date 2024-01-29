#include <stdio.h>

int main(void){
    int number, day, month, year;
    float price;

    printf("Enter iten number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter pursache date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day,&year);

    printf("Item\t\tUnit\t\tPursache\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%6.2f\t\t%.2d/%.2d/%.4d",number,price,day,month,year);

    return 0;
}