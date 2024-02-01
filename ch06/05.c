#include <stdio.h>

int main(void){
    int n,m;

    printf("Enter a number: ");
    scanf("%d", &n);

    do{
        m = n % 10;
        n /= 10;
        printf("%d",m);
    }while(n != 0);
    
    return 0;
}