#include <stdio.h>

// Declaracion de la funcion
void selection_sort(int a[], int n);


int main(void){
    char ch; 
    int i, entries = 0, a[30];

    // Cojemos los datos, el array no tiene por que tener 30 datos, simplemente fijamos el limete
    // de este a 30
    printf("Enter a series of up to 30 integers: ");
    for(i = 0; i < 30 && (ch = getchar() != '\n'); i++){
        scanf(" %d", &a[i]);
        entries++;
    }

    printf("Unsorted array: ");
    for(i = 0; i < entries; i++)
        printf("%d ", a[i]);

    selection_sort(a, entries);

    printf("\nSorted array: ");
    for(i = 0; i < entries; i++)
        printf("%d ", a[i]);
    
    return 0;
}

// Creamos la funcion para ordenar el array
void selection_sort(int a[], int n){
    if(n == 0) return; // Si el tamaño tiene tamaño 0 no hacemos nada

    int i, index_largest = 0;
    // Buscamos el numero mas grande del array
    for(i = 1; i < n; i++){
        if(a[i] > a[index_largest])
            index_largest = i;
    }

    int largest = a[index_largest]; // Guardamos el valor del numero mas grande encontrado
    a[index_largest] = a[n-1]; // Guardamos en la posicion del numero mas grande encontrado el ultimo dato dle array
    a[n - 1] = largest; // Movemos el numero mas grande a la ultima posicion del array

    selection_sort(a, n-1); // Llamada recursiva a la funcion

    // La llamada a esta funcion termina cuando n = 0
}