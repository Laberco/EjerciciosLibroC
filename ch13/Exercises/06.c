#include <stdio.h>

void censor(char s[]);
int read_message(char str[], int n);


int main(void){
    // Creamos un array donde guardar el mensaje
    char str[20];
    printf("Introduce un mensage: ");
    read_message(str, 20);
    printf("%s", str);

    // Modificamos la cadena
    censor(str);
    printf("\n%s", str);

    return 0;
}


int read_message(char str[], int n){
    int i, ch;

    while((ch = getchar()) != '\n' && i < n)
    {
        str[i++] = ch;
    }
    str[i] = '\n';
    return i;
}

//Funcion para hacer el remplazo de fool por xxx
void censor(char s[]){
    //Recorremos la cadena almacenada, solo podemos remplazar la palabra fool
    int i;
    for(i = 0; s[i] != '\0'; i++)
        if(s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'o')
            s[i] = s[i + 1] = s[i + 2] = 'x';
}
