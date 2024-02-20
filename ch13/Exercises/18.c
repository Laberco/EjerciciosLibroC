#include <stdio.h>
#include <string.h>


void remove_filename(char *url);


int main(void){
    char url[] = "http://knking.com/index.html";
    remove_filename(url);
    printf("%s", url);
    return 0;
}


void remove_filename(char *url){
    //Buscamos el slash en la url
    char *p = &url[strlen(url)];
    while(*p-- != '/');
    *(p+1) = '\0';
}