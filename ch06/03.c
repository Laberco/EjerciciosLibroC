#include <stdio.h>

int main(void){
    int num, denom, temp, tempNum, tempDenom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    tempNum = num;
    tempDenom = denom;

    while(num != 0){
        temp = num % denom;
        denom = num;
        num = temp;
    }

    printf("In lowest terms: %d/%d", (tempNum / denom), (tempDenom / denom));
    return 0;
}