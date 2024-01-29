#include <stdio.h>

int main(void){
    int num1, num2, num3;

    printf("Enter phone number [(xx) xxx-xxxx]: ");
    scanf("(%d) %d - %d", &num1, &num2, &num3);
    // De esta forma indicamos que puede haber espacios en blanco
    

    printf("You entered %d.%d.%d", num1, num2, num3);

    return 0;
}