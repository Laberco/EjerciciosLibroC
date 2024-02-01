#include <stdio.h>

int main(void){
    float n, biggest = 0;

    printf("Enter a number: ");
    scanf("%f", &n);
    while(n != 0){
        if(n > biggest)
            biggest = n;
        printf("Enter a number: ");
        scanf("%f", &n);
    }
    printf("The largest number entered was %.2f", biggest);
    return 0;
}