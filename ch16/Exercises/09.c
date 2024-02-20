#include <stdio.h>
#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};


struct color make_color (int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void){
    // Prabamos las funciones
    struct color c1 = make_color(255, 0, 255);
    struct color c2 = make_color(255, 0, 0);
    struct color c3 = make_color(2, 1, 2);
    struct color brc3 = brighter(c3);
    struct color dac3 = darker(c3);
    printf("struct c1 red value: %d\n", getRed(c1));
    printf("Is struct c1 equal to struct c2?: %d\n", equal_color(c1, c2));
    printf("Brightened struct c3: %d,%d,%d\n", brc3.red, brc3.green, brc3.blue);
    printf("Darkened struct c3: %d,%d,%d\n", dac3.red, dac3.green, dac3.blue);

    return 0;
}




/* devuelve la estructura color con los correspondientes valores asignados*/
struct color make_color(int red, int green, int blue){
    struct color c = {red,green,blue};
    if(c.red < 0)
        c.red = 0;
    if(c.red > 255)
        c.red = 255;
    if(c.green< 0)
        c.green = 0;
    if(c.green > 255)
        c.green = 255;
    if(c.blue < 0)
        c.blue = 0;
    if(c.blue > 255)
        c.blue = 255;
    
    return c;
}

/* Devuelve el valor red de una estructura*/
int getRed(struct color c){
    return c.red;
}

/* Devuelve true si los elementos de las estructuras son iguales*/
bool equal_color(struct color color1, struct color color2){
    if(color1.red == color2.red && 
    color1.green == color2.green &&
    color1.blue == color2.blue)
        return true;
    else 
        return false;
}

struct color brighter(struct color c){
    struct color new_color;
    // Comprobamos si todos los elementos son 0
    if(c.red == 0 && c.green == 0 && c.blue == 0){
        new_color.red = 3;
        new_color.green = 3;
        new_color.blue = 3;
        return new_color;
    }
    
    /* Si algun miembro de la estructura es mayor que 0 pero menor que 3, se remplaza
    ese miembro por 3*/
    if(c.red > 0 && c.red < 3)
        c.red = 3;
    if(c.green > 0 && c.green < 3)
        c.green = 3;
    if(c.blue > 0 && c.blue < 3)
        c.blue = 3;

    // Hacemos las divisiones para los nuevos valores
    new_color.red = (c.red / 0.7) > 255 ? 255 : (int)(c.red / 0.7); 
    new_color.green = (c.green / 0.7) > 255 ? 255 : (int)(c.green / 0.7); 
    new_color.blue = (c.blue / 0.7) > 255 ? 255 : (int)(c.blue / 0.7); 

    return new_color;
}

/* Devuelve una estructura que representa una version mas oscura de la estructura proporcionada*/
struct color darker(struct color c){
struct color new_color;
    // Comprobamos si todos los elementos son 0
    if(c.red == 0 && c.green == 0 && c.blue == 0){
        new_color.red = 3;
        new_color.green = 3;
        new_color.blue = 3;
        return new_color;
    }
    
    /* Si algun miembro de la estructura es mayor que 0 pero menor que 3, se remplaza
    ese miembro por 3*/
    if(c.red > 0 && c.red < 3)
        c.red = 3;
    if(c.green > 0 && c.green < 3)
        c.green = 3;
    if(c.blue > 0 && c.blue < 3)
        c.blue = 3;

    // Hacemos las divisiones para los nuevos valores
    new_color.red = (c.red / 0.7) > 255 ? 255 : (int)(c.red * 0.7); 
    new_color.green = (c.green / 0.7) > 255 ? 255 : (int)(c.green * 0.7); 
    new_color.blue = (c.blue / 0.7) > 255 ? 255 : (int)(c.blue * 0.7); 

    return new_color;
}