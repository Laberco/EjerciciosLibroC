#include <stdio.h>
#include <stdbool.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point upper_left, lower_right; };

int area(struct rectangle r);
struct point calcular_center(struct rectangle r);
struct rectangle move(int x, int y, struct rectangle r);
bool p_is_on_r(struct rectangle r, struct point p);



int main(void){
    struct point upper_left = {0, 0};
    struct point lower_right = {10, 5};

    struct rectangle r1 = {upper_left, lower_right};
    printf("Area: %d\n", area(r1));
    struct point center = calcular_center(r1);
    printf("Center: %d,%d\n", center.x, center.y);
    struct rectangle r2 = move(10, 10, r1);
    struct point center2 = calcular_center(r2);
    printf("Center: %d,%d\n", center2.x, center2.y);

    struct point p1 = {15, 10};
    printf("Rectangle upper left: %d,%d\n", r2.upper_left.x, r2.upper_left.y);
    printf("Rectangle lower right: %d,%d\n", r2.lower_right.x, r2.lower_right.y);
    printf("Point %d,%d is in rectangle?: %d", p1.x, p1.y,
    p_is_on_r(r2, p1));

    return 0;
}

/* Creamos una funcion que calcula el area de un rectangulo*/
int area(struct rectangle r){
    // Calculamos el area del rectangulo obteniendo el alto y el largo del rectangulo
    int alto, largo;
    alto = r.lower_right.y - r.upper_left.y;
    largo = r.lower_right.x - r.upper_left.x;
    return alto * largo;
}

// Calcula el centro de un rectangulo y lo devuelve en una estructura
struct point calcular_center(struct rectangle r){
    struct point centro_rectangulo;
    centro_rectangulo.x = (int)((r.lower_right.y - r.upper_left.y) / 2);
    centro_rectangulo.y = (int)((r.lower_right.x - r.upper_left.x) / 2);
    return centro_rectangulo;
}

// Mueve las cordenadas del rectangulo
struct rectangle move(int x, int y, struct rectangle r){
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y += y;
    return r;
}

/* Comprueba si el punto p esta dentro de el rectangulo r*/
bool p_is_on_r(struct rectangle r, struct point p){
    if(p.y >= r.upper_left.y && p.y <= r.lower_right.y)
        if(p.x >= r.upper_left.x && p.x <= r.lower_right.x)
            return true;
    return false;
}