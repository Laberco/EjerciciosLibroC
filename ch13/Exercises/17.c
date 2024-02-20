#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(void){
    const char file_name[] = "memo.txt";
    const char extension[] = "TXT";
    printf("%s", test_extension(file_name, extension) ? "True" : "False");

    return 0;   
}

bool test_extension(const char *file_name, const char *extension){
    // Buscamos el punto
    while(*file_name++ != '.');
    //Una vez llegamos al punto, el puntero queda apuntando a la primera letra de la extension

     if(strlen(file_name) != strlen(extension))
        //Si tienen distinto tamaño, son distintas
        return false;  

    while(*file_name != '\0'){
        if(!toupper(*file_name++) == toupper(*extension++))
            return false;
    }
    return true;

}