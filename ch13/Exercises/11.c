#include <stdio.h>

int strcmp(char *s, char *t);

int main(void){
    // Creamos dos cadenas a comparar
    char *str1 = "computer";
    char *str2 = "science";

    printf("%d", strcmp(str1, str2));

    return 0;
}

int strcmp(char *s, char *t){
    // Compara el orden alfabetico de la cadena
    char *p = s;
    // Comprobamos si son iguales las cadenas
    while(s == t){
        if(!*s)
        // Comprobamos si s1 termina
            return 0;
    }
    // Hacemos la resta segun el valor ascci, de forma que nos
    // permite conocer el orden en el que se encuentrn
    return *s - *t;
}