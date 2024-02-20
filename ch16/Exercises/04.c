#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
}complex;

complex make_complex(double real, double imaginary){
    complex newcomplex;

    newcomplex.real = real;
    newcomplex.imaginary = imaginary;

    return newcomplex;
}

complex add_complex(complex s1, complex s2){
    complex newcomplex;

    newcomplex.real = s1.real + s2.real;
    newcomplex.imaginary = s1.imaginary + s2.imaginary;

    return newcomplex;
}

int main(void){
    complex c1, c2, c3;
    return 0;
}