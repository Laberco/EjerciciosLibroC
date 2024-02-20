#include <stdio.h>

struct fraction {
    int numerator;
    int denominator;
};

struct fraction reduce_fraction(struct fraction f);
struct fraction add_fraction(struct fraction f1, struct fraction f2);
struct fraction substract_fraction(struct fraction f1, struct fraction f2);
struct fraction multiply_fraction(struct fraction f1, struct fraction f2);
struct fraction divide_fraction(struct fraction f1, struct fraction f2);
int find_gcd(int n1, int n2);

int main(void){
    struct fraction f = {21, 3};
    struct fraction f1 = {8,64};
    struct fraction f2 = {9, 711};

    struct fraction reduced_fraction = reduce_fraction(f);
    printf("La fraccion %d/%d en formato reducido es: %d/%d\n",f.numerator, f.denominator,
    reduced_fraction.numerator, reduced_fraction.denominator);

    struct fraction add_fr = add_fraction(f1, f2);
    printf("La suma de las fraciones %d/%d y %d/%d es: %d/%d\n",
    f1.numerator, f1.denominator, f2.numerator, f2.denominator,
    add_fr.numerator, add_fr.denominator);

    struct fraction redd_fr = substract_fraction(f1, f2);
    printf("La resta de las fraciones %d/%d y %d/%d es: %d/%d\n",
    f1.numerator, f1.denominator, f2.numerator, f2.denominator,
    redd_fr.numerator, redd_fr.denominator);

    struct fraction mult_fr = multiply_fraction(f1, f2);
    printf("La resta de las fraciones %d/%d y %d/%d es: %d/%d\n",
    f1.numerator, f1.denominator, f2.numerator, f2.denominator,
    mult_fr.numerator, mult_fr.denominator);

    struct fraction div_fr = divide_fraction(f1, f2);
    printf("La resta de las fraciones %d/%d y %d/%d es: %d/%d\n",
    f1.numerator, f1.denominator, f2.numerator, f2.denominator,
    div_fr.numerator, div_fr.denominator);

    return 0;
}


/* Funcion que encuentra el minimo comun divisor*/
int find_gdc(int n1, int n2){
    int temp;

    while(n1 != 0){
        temp = n2 % n1;
        n2 = n1;
        n1 = temp;
    }
    return n2;
}


/* Funcion que reduce una fraccion al los terminos minimos*/
struct fraction reduce_fraction(struct fraction f1){
    int gdc = find_gdc(f1.numerator, f1.denominator);

    f1.numerator /= gdc;
    f1.denominator /= gdc;
    return f1;
}

/* Funcion que suma dos fracciones*/
struct fraction add_fraction(struct fraction f1, struct fraction f2){
    // Creamos una nueva estructura que sera devuelta
    int numerator, denominator;
    numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
    denominator = f1.denominator * f2.denominator;

    struct fraction result = {
        numerator,
        denominator
    };

    result = reduce_fraction(result);

    return result;
}

/* Funcion que resta f2 de f1*/
struct fraction substract_fraction(struct fraction f1, struct fraction f2){
    // Tenemos que restar dos funciones
    int numerator, denominator;
    numerator = (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator);
    denominator = f1.denominator * f2.denominator;


    // Creamos la estructura que va a ser devuelta
    struct fraction result = {
        numerator,
        denominator
    };

    result = reduce_fraction(result);

    return result;
}

/* Funcion que multiplica dos fracciones*/
struct fraction multiply_fraction(struct fraction f1, struct fraction f2){
    int numerator,denominator;
    numerator = f1.numerator * f2.numerator;
    denominator = f1.numerator * f2.denominator;

    struct fraction result = {
        numerator,
        denominator
    };

    result = reduce_fraction(result);

    return result;
}

/* Funcion que divide dos fracciones*/
struct fraction divide_fraction(struct fraction f1, struct fraction f2){
    int numerator,denominator;
    numerator = f1.numerator * f2.denominator;
    denominator = f1.denominator * f2.numerator;

    struct fraction result = {
        numerator,
        denominator
    };

    result = reduce_fraction(result);

    return result;
}
