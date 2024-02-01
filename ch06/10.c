#include <stdio.h>

int main(void){
    int d, m, y, ed, em, ey, count = 0;

    for(;;){
        printf("Enter a date (mm/dd/yy) (0/0/0 to terminate): ");
        scanf("%d /%d /%d", &m, &d, &y);

        // Comprobamos si el usuario quiere terminar el programa
        if(m == 0 && d == 0 && y == 0){
            break;
        }

        // Cojemos la primera data introducida para guardarla y hacer
        // comparaciones con el resto de datas introducidas
        if(count == 0){
            ed = d; em = m; ey = y;
            count++;
            continue;
        }
        if(y > ey){ // Año posterior
            continue;
        }else if(y < ey){ // Año anterior
            // Guardamos los valores de la data introducida ya que es la mas reciente
            ed = d; em = m; ey = y;
        }
        else{ //Mismo año, comparamos los meses
            if(m > em) { // Mes posterior
                continue;
            }else if(m < em){ // Mes anterior
                ed = d; em = m; ey = y;
            }else{ // Mismo mes, comparamos el dia
                if(d > ed){
                    continue;
                }else{
                    ed = d; em = m; ey = y;
                }
            }
        }
    }
    printf("%.2d/%.2d/%.2d is the earliest date", em, ed, ey);

    return 0;
}