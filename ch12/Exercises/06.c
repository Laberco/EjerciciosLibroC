/* Nos piden utilizar, array arithmetic, esto es, incrementar/decrementar el puntero
p++, p--, en vez de array subscripting, esto es a[i], indicar la posicion que queremos
acceder  */

#include <stdio.h>

int sum_array1(const int a[], int n);
int sum_array2(const int a[], int n);

int main(void)
{
    int a[5] = {10, 23, 4, 2, 17};

    printf("Sum array 1: %d\n", sum_array(a, 5));
    printf("Sum array 2: %d\n", sum_array2(a,5));

    return 0;
}

int sum_array(const int a[], int n)
{
    int i, sum;

    sum = 0;
    for(i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int sum_array2(const int a[], int n)
{
    int *p, sum;
    sum = 0;
    for(p = a; p < a + n ; p++)
        sum += *p;
    return sum;
}