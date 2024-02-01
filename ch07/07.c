#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result, num_res, denom_res;
    char op; // Guardar la operacion que queremos realizar

    printf("Enter two fractions separeted the operation to compute: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);
    
    switch(op){
        case '+':
            num_res = (num1 * denom2) + (num2 * denom1);
            denom_res = denom1 * denom2;
            break;
        case '-':
            num_res = (num1 * denom2) - (num2 * denom1);
            denom_res = denom1 * denom2;
            break;
        case '*':
            num_res = num1 * num2;
            denom_res = denom1 * denom2;
            break;
        case '/':
            num_res = num1 * denom2;
            denom_res = num2 * denom1;
            break;
    }

    // Para que quede mejor, simplificamos las funciones, para eso buscamos el 
    // mcm
    int temp, n_temp = num_res, gcd = denom_res;
    while(n_temp != 0){
        temp = gcd % n_temp;
        gcd = n_temp;
        n_temp = temp;
    }

    
    /* Print result in its simplest form */
    if (num_res / gcd == denom_res / gcd)
        printf("Result is: %d", num_res / gcd);
    else if (num_res > denom_res)
        printf("Result is: %d %d/%d", num_res / denom_res, num_res % denom_res, denom_res);
    else
        printf("Result is: %d/%d", num_res / gcd, denom_res / gcd);
}