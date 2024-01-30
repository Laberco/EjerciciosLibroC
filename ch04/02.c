#include <stdio.h>

int main(void){
    int n1, n2, n3;

    printf("Enter a three-digit number: ");
    scanf("%d", &n1);

    n3 = n1 % 10;
    n2 = n1 / 10;
    n2 = n2 % 10;
    n1 = (n1 / 10) / 10;

    printf("The reversal is: %d%d%d", n3, n2, n1);

    return 0;
}