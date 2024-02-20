#include <stdio.h>

// Declarar una estructura asignandole el nombre
struct complex {
    double real;
    double imaginary;
};

// Funcion que recibe los argumentos de una estrucura y devuelve la estructura
struct complex make_struct(double real, double imaginary){
    struct complex newcomplex;
    newcomplex.real = real;
    newcomplex.imaginary = imaginary;

    return newcomplex;
}

/* Funcion que añade los miembros correspondientes de dos estructuras pasadas como argumentos
y devuelve el resultado en otra estrucutra*/

struct complex add_complex(struct complex st1, struct complex st2){
    struct complex newcomplex;
    newcomplex.real = st1.real + st2.real;
    newcomplex.imaginary = st2.imaginary + st2.imaginary;

    return newcomplex;
}

int main(void){


    struct complex c1, c2, c3;
    return 0;
}


