#include <ctype.h>
#include <stdio.h>

void capitalized(char str[]);
void capitalized_2(char str[]);
void printf_string(char *str);

int main(void){
    char str[10] = "j9.d,c34p\0";
    printf("Original string: ");
    printf_string(str);

    printf("\nCadena modificada: ");
    capitalized(str);
    printf_string(str);

    printf("\nCadena modificada: ");
    capitalized_2(str);
    printf_string(str);
    return 0;
}



// Funcion para mostrar la cadena
void printf_string(char *str){
    char *p = str;
    while(*p)
        printf("%c", *p++);
}


/* Convierte todos los caracteres de la cadena en mayusculas*/
void capitalized(char str[]){
    int i;
    while(str[i] != '\0'){
        str[i] = toupper(str[i]);
        i++;
    }
}

/* Lo mismo pero utilizando aritmetica con arrays*/
void capitalized_2(char *str){
    char *p = str;
    while(*p !='\0'){
        *p = toupper(*p);
        p++;
    }
}