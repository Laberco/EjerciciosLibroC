#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void){
    int a[N] = {4,3,1,6,5,3,1,2,9,8};
    int largest = 0, second_largest = 0;

    printf("Array contents: ");
    for(int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    find_two_largest(a, N, &largest, &second_largest);
    printf("Largest: %d, Second Largest: %d\n", largest, second_largest);

    return 0;

}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] > *largest){
            /* Si encontramos un numero mayor que el mas grande almacenado
            hacemos el cambio para que este pase a ser el segundo mas
            grande encontrado*/
            *second_largest = *largest;
            *largest = a[i];
        }else if (a[i] <= *largest && a[i] > *second_largest){
            *second_largest = a[i];
        }
        printf("Iteration %d: Largest: %d, Second Largest: %d\n",
        i, *largest, *second_largest);
    }
}