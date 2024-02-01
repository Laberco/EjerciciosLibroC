#include <stdio.h>

int main(void){
    int nDays, startDay;

    printf("Enter number of days in month: ");
    scanf("%d", &nDays);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);

    for(int i = 1; i < startDay; i++)
        printf("   ");

    for(int i = 1; i <= nDays;i++){
        if(((i + startDay - 1) % 7) == 0){
            printf("%3d",i);
            printf("\n");
        }else{
            printf("%3d", i);
        }
    }

    return 0;
}