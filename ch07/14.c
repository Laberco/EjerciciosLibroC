#include <stdio.h>
#include <math.h>

int main(void){
    double x, y = 1, avgyxy;
    scanf("%lf", &x);

    for(;;){
        avgyxy = (y + x / y) / 2;
        if(abs(y - avgyxy) < (.00001f * avgyxy));
            break;
        y = avgyxy;
        printf("Average of y and x/y: %lf\n", y);
    }

    return 0;
}