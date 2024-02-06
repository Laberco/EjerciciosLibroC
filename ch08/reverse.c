#include <stdio.h>

#define N 10
/* Crear un macro con el tamaño del array es util
por si mas adelante tenemos que cambiar el tamaño del array*/

int main(void){
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);
    
    printf("In reverse order: ");
    for(i = N - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}