#include <stdio.h>

int *find_middle(int a[], int n);

int main(void){
    int a[5] = {1,2,3,4,5};
    printf("Middle element: %d", *find_middle(a, 5));

    return 0;
}

int *find_middle(int a[], int n){
    // Indica que la funcion devuelve un puntero
    return a + (n/ 2);
}