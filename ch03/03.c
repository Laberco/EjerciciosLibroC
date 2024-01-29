#include <stdio.h>

int main(void){
    int GS1, group, pubCode, itemNumber, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1, &group, &pubCode, &itemNumber, &checkDigit);

    printf("GS1 prefix: %d\n", GS1);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", itemNumber);
    printf("Item number: %d", itemNumber);
    printf("Check digit: %d\n", checkDigit);

    return 0;
}