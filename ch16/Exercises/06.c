#include <stdio.h>

typedef struct{
    int hours;
    int minutes;
    int seconds;
}time;

time split_time(long total_seconds){
    /*Nos proprocionan un numero total de segunfos desde medianoche, y tenemos
    que convertirlos en una fecha*/
    time new_time;

    new_time.hours = total_seconds / 3600;
    total_seconds %= 3600;
    new_time.minutes = total_seconds / 60;
    total_seconds %=  60;
    new_time.seconds = total_seconds;

    return new_time;
}

int main(void){
    long seconds;

    printf("Introduce un numero de segundos entre 0 y 86400: ");
    scanf("%ld", &seconds);
    while(seconds <= 1 || seconds >= 86400){
        printf("Error, introduce un numero de segundos dentro del rango valido (0 y 86400): ");
        scanf("%ld", &seconds);
    }

    time t1 = split_time(seconds);

    printf("%ld seconds in hh:mm:ss: %.2d:%.2d:%.2d\n", seconds, t1.hours, t1.minutes, t1.seconds);
    
    return 0;
}