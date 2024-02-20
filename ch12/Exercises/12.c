#include <stdio.h>

#define SIZE sizeof(a) / sizeof(a[0])

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void){
    // Creamos un array.
    int a[10] = {38, 4, 38, 84, 65, 9, 5, 14, 76, 49};
    int largest = 0, second_largest = 0;

    find_two_largest(a, SIZE, &largest, &second_largest);
    printf("El entero mas grande encontrado es: %d "
    "y el segundo mas grande es %d", largest, second_largest);

    return 0;

}



void find_two_largest(const int *a, int n, int *largest, int *second_largest){
    // Recorremos el array buscando los mas grandes
    const int *p;
    for(p = a; p < a + n; p++){
        if(*p > *largest){
            // Si encontramos un numero mas grande, el segundo mas grande pasa a tomar
            // el valor que tenia antes el mas grande
            *second_largest = *largest;
            *largest = *p;
        }
        if(*p > *second_largest && *p < *largest)
        /* Podemos encontrar un valor mas grande que el segundo mas grande pero menos
        que el mas grande, entonces actualizamos el segundo mas grande*/
            *second_largest = *p;
    }
}