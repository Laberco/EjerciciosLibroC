/* Sums a series of numbers*/
#include <stdio.h>

int main(void){
    int sum, n;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &n);
    while(n != 0){
        sum+= n;
        scanf("%d", &n);
    }
    printf("The sums is: %d", sum);
    return 0;
}