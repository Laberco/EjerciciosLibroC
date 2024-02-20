#include <stdio.h>
#include <stdbool.h>

/* Tenemos que buscar la temperatura mas alta del dia y la mas alta de la semana*/

#define DAYS 7
#define HOURS 24

int *find_largest(int a[], int n);

int main(void){
    // Creamos el array que vamo sa utilizar
    int temperatures[DAYS][HOURS] = {[1][15] = 31, [5][2] = 24, [6][2] = 35};
    // Tenemos que buscar la temperatura mas alta del dia y de la semana
    int *day_largest, week_largest, day = 0;
    
    week_largest = temperatures[0][0];
    //Tenemos que buscar la temperatura mas alta del dia y de la semana
    for(day = 0; day < DAYS; day++){
        day_largest = find_largest(temperatures[day], HOURS); // bsucamos el mas alto del dia
        printf("Day %d largest : %d\n",day, *day_largest);
        if(*day_largest > week_largest)
            week_largest = *day_largest;
    }
    printf("Week largest: %d", week_largest);

    return 0;
}



/* Devuelve un puntero el cual apunta al elemento del array con el mayor valro*/
int *find_largest(int a[], int n){
    int *p, *largest;
    // Aqui tenia un problema, ya que intentaba acceder a largest sin asignarle antes
    // una dirección, lo cuale s ilegal en c y me saltaba el aviso de que estaba
    // accediento a uan zona ilegal de memoria
    for(p = a, largest = a; p < a + n; p++){
        if(*p > *largest){
            largest = p; // Copiamos la direccion
        }
    }
    return largest;
}