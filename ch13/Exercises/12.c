#include <stdio.h>

void get_extension(const char *file_name, char *extension);

int main(void){
    char extension[4];
    get_extension("memo.txt", extension);
    printf("%s", extension);
    return 0;
}

void get_extension(const char *file_name, char *extension){
    // Tenemos que recorrer el string filaneme hasta encontrar un .
    char const *p = file_name;
    char *p_ext = extension;
    while(*(p++) != '.');
    // P se detiene justo despues del punto
    while(*p != '\0')
        *p_ext++ = *p++; // Copiamos la extension en extension
    *p_ext = '\0';
}

/* Segun el ejemplo del libro*/

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
    char filename[] = "memo.txt";
    char extension[20];
    get_extension(filename, extension);
    printf("Filenme: %s, Extension: %s", filename, extension);
    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    while(*file_name){
        // mientras no alcance el caracter null
        if(*file_name++ == '.'){
            // Cuando se encuentra el punto
            strcpy(extension, file_name);
            // Copiamos en la extension, la extension del file_name
            return;
        }
    }
    strcpy(extension, "");
    // Añadimos el caracter null
}