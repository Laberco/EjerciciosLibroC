#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void){ 
    const double a[5] = {1, 2, 3, 4, 5};
    const double b[5] = {1, 2, 3, 4, 5};

    printf("Inner product: %.2f", inner_product(a, b, 5));
    return 0;
    return 0;
}

double inner_product(const double *a, const double *b, int n){
    double inner_product;

    for(int i = 0; i < n; i++)
        inner_product += *a++ * *b++;
    
    return inner_product;
}