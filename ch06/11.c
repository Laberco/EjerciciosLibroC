#include <stdio.h>

int main(void){
    int n;
    float e = 1.0f;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for(int i = 1; i <=n; i++){
        int denom = 1;
        for(int j = 1; j <= i; j++){
            denom *= j;
        }
        e += (float)1/denom;
    }
    printf("El valor de e aporximado %d veces es: %f", n,e);
    return 0;
}