#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch, first_l;

    printf("Enter a frst and last name: ");
    while((ch = getchar()) == ' '); // Saltamos los espacios iniciales
    first_l = ch;
    while((ch = getchar()) != ' '); // Saltamos los espacios 

    while((ch = getchar()) != '\n'){
        if(ch != ' ') // para no colocar espacios
            putchar(ch);
    }
    printf(", %c.", first_l);

    return 0;


}