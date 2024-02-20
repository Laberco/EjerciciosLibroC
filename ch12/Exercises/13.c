#include <stdio.h>

#define N 20

/* Tenemos que crear un array el cual solo tiene 1 en la diagonal*/

int main(void){
    double ident[N][N], *p; // Creamos el array
    int cont = N - 1; // Creamos el puntero

    /* Utilizando la propiedad de que los arrays se guardan en C de forma ocntinuada*/
    for(p = &ident[0][0]; p <= &ident[N-1][N-1];p++){
        if(cont == N - 1){
            *p = 1;
            cont = 0;
        }else{
            *p = 0;
            cont++;
        }
    }

    int col, row;
    for(row = 0; row < N; row++){
        for(col = 0; col < N; col++){
            printf("%.0f ", ident[row][col]);
        }
        printf("\n");
    }
    return 0;
}