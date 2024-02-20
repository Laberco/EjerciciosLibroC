#include <stdio.h>
#include <stdlib.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
struct rectangle *p;

int main(void){

    /* Tenemos que reservar espacio para una estructura del tipo rectangle, ya que como
    point esta dentro de la estructura rectangle, tambien se reserva espcio para esta.
    p es un puntero a una estructura de tipo rectangle, de forma que la direccion devuelta
    por malloc se almacena en este puntero.*/
    if((p = malloc(sizeof(struct rectangle))) == NULL){
        printf("Error, malloc failes.");
        exit(EXIT_FAILURE);
    }

    // Guardamos los datos utilizando ->
    p->upper_left.x = 10;
    p->upper_left.y = 25;
    p->lower_right.x = 20;
    p->lower_right.y = 15;

    printf("Rectangle upper left= %d,%d\n", p->upper_left.x, p->upper_left.y);
    printf("Rectangle lower right = %d,%d", p->lower_right.x, p->lower_right.y);
    
    return 0;



}