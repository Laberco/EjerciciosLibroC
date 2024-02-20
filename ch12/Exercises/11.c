#include <stdio.h>

#define SIZE sizeof(a) / sizeof(a[0])
// Utilizamos un macro para saber el tamaño del array

int *find_largest(int a[], int n);

int main(void){

    int i, a[10] = {1, 48, 24, 83, 76, 34, 74, 12, 84, 23};

    printf("Contenido del array");
    for(i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    
    printf("\nLarguest: %d", *find_largest(a, SIZE));
    // Mostramos el valor del puntero devuelto por la funcion

    return 0;
}

int *find_largest(int a[], int n){
    int *p, *largest;
    for(p = a, largest = a; p < a + n; p++){
        if(*p > *largest)
            largest = p;
    }

    return largest;
}