#include <stdio.h>

#define PI 3.14159f
#define FRAC (4.0f / 3.0f)

int main(void){
    int radius = 10;
    float volume = 0.0f;

    volume = FRAC * PI * radius * radius * radius;

    printf("El volumen de la esfera es: %.2f", volume);

    return 0;
}