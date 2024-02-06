#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch, first_l;
    char last_name[20];
    int count = 0;

    printf("Enter a frst and last name: ");
    while((ch = getchar()) == ' '); // Saltamos los espacios iniciales
    first_l = ch;
    while((ch = getchar()) != ' '); // Saltamos los espacios 

    while((ch = getchar()) != '\n'){
        if(ch != ' ') // para no colocar espacios
            last_name[count++] = ch;
    }
    for(int i = 0; i < count;i++)
        printf("%c", last_name[i]);
    printf(", %c.", first_l);

    return 0;
}