#include <stdio.h>
#include <stdbool.h>

#define FEBRUARY 1
#define EARLIER -1
#define SAME 0
#define LATER 1

// Creamos la estructura
typedef struct{
    int month;
    int day;
    int year;
}date;

// Creamos un array con los dias que tiene cada mes
const int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Comprobamos si un año es bisiesto
bool is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


// Funcion que devuelve el numero del dia (1-366)correspondiente a la data
int day_of_year(date d){
    int month , total_days = d.day;
    for(month = 0; month < d.month - 1;month++){
        total_days += month_days[month];

        //Comprobamos si ese año es bisiesto
        if(month == FEBRUARY && is_leap_year(d.year))
        // Si lo es, aumentamos 1 dia
            total_days++;
    }
    return total_days;
}

int compare_dates(date d1, date d2){
    int comparison;

    if(d1.year < d2.year)
        comparison = EARLIER;
    else if (d1.year > d2.year)
        comparison = LATER;
    else{
        // Si son en el mismo año, comparamos los dias aprovechando la funcion creada
        int d1_days = day_of_year(d1);
        int d2_days = day_of_year(d2);

        if(d1_days > d2_days)
            comparison = EARLIER;
        else if(d1_days < d2_days)
            comparison = LATER;
        else
            comparison = SAME;
    }

    return comparison;
}


int main(void){
    date d1 = {3, 12, 2012};
    date d2 = {8,5,2008};

    printf("Day of year in date %.2d/%.2d/%.4d: %d\n", d1.month, d1.day, d1.year,day_of_year(d1));
    printf("day of year in date %.2d/%.2d/%.4d: %d\n",d2.month, d2.day, d2.year, day_of_year(d2));

    printf("Comparison of the dates %.2d/%.2d/%.4d and %.2d/%.2d/%.4d: %d\n",
    d1.month, d1.day,d1.year, d2.month, d2.day,d2.year,
    compare_dates(d1,d2));
    printf("Comparison of the dates %.2d/%.2d/%.4d and %.2d/%.2d/%.4d: %d\n",
    d2.month, d2.day,d2.year, d1.month, d1.day,d1.year,
    compare_dates(d2,d1));
    printf("Comparison of the dates %.2d/%.2d/%.4d and %.2d/%.2d/%.4d: %d\n",
    d1.month, d1.day,d1.year, d1.month, d1.day,d1.year,
    compare_dates(d1,d1));
    
    return 0;

}