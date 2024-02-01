#include <stdio.h>
#include <ctype.h>

int main(void){
    int num = 0;
    char ch;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n'){
        switch(tolower(ch)){
            case'a': case 'e': case 'i': case 'o': case 'u':
                num++;
                break;
        }
    }

    printf("Your sentence contains %d vowels.", num);

    return 0;
}