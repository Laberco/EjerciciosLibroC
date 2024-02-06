#include <stdio.h>

#define N 10 /*  Es buena practica, definir el tamaño del array con un
macro, de forma que asi, podemos modificar el tamaño del array de forma
mas sencilla*/

// Prototipo de la funcion
void max_min(int a[], int n, int *max, int *min);

int main(void){
    int b[N], i, big, small;
    
    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &b[i]);
    
    max_min(b, N, &big, &small);
    /* Pasamos big y small como punteros, lo que estamos haciendo
    es enviar la direccion de memoria de las variables, de forma
    que la funcion sabe en que sitio escribir/leer pudiendo modificar
    las variables desde dicha funcion*/

    printf("largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int i;
    
    *max = *min = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}