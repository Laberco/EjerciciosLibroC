#include <stdio.h>

int main(void){
    int n,n1, n2, n3, n4, n5;

    printf("Enter a number betwen 0 and 32767: ");
    scanf("%d", &n);

    n1 = n % 8;
    n /= 8;
    n2 = n % 8;
    n /= 8;
    n3 = n % 8;
    n /= 8;
    n4 = n % 8;
    n /= 8;

    printf("in octal, your number is: %d%d%d%d%d", n5, n4, n3, n2, n1);

    return 0;
}