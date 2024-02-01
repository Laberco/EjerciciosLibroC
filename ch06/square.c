/* Prints a table of squeare susing a while statement */

#include <stdio.h>

int main(void){
    int n;

    printf("This program prints a table of squares.");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    int i = 1;
    while(i <= n){
        printf("%10d%10d\n",i, (i * i)); // Especiicamos que 
        i++;
    }

    return 0;
}