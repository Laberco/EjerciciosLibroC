#include <stdio.h>

int main(void){
    int hour, minuts;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minuts);

    int ampm_hour = hour >= 12 ? hour % 12 : hour;
    printf("Equivalent 12 hour time: %d:%d %s", ampm_hour,minuts,
                                            hour <= 12 ? "AM" : "PM" );
    
    return 0;

}