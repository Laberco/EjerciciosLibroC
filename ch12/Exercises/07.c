#include <stdbool.h>
#include <stdio.h>

bool search(const int a[], int n, int key);

int main(void){
    int a[5] = {12, 45, 21, 87, 12}, key;

    printf("Introduce la clave a buscar en el array: ");
    scanf("%d", &key);

    if(search(a, 5, key))
        printf("Se ha encontrado la clave %d en el array\n", key);
    else
        printf("No se ha encontrado la clave %d en el array\n", key);
    return 0;
}

bool search(const int a[], int n, int key){
    const int *p; // Creamos un puntero
    for(p = a; p < a + n; p++)
        if(*p == key)
            return true;
    return false;
}