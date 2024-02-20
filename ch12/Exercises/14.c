#include <stdio.h>
#include <stdbool.h>

#define DAYS 7
#define HOURS 24

bool search(const int a[], int n, int key);

int main(void)
{
    // Creamos el array u asignamos un valor para hacer pruebas
    const int temperature[DAYS][HOURS] = {[1][15] = 31};
    int day;
    bool found = false;

    for(day = 0; day < DAYS; day++){
            if(search(&temperature[day][0], HOURS, 32)){
                found = true;
                break;
            }
    }

    printf("Found: %s", found ? "True" : "False");

    return 0;
}

bool search(const int a[], int n, int key){
    const int *p;
    while(p < a +n){
        if(key == *p)
            return true;
    }
    return false;
}

