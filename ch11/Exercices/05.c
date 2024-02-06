#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);


int main(void){
    long total_sec = 33621;
    int hr, min, sec;

    split_time(total_sec, &hr, &min, &sec);
    printf("Seconds elapsed since midnight: %ld\n, total_sec");
    printf("Hour: %d, Minute: %d, Second: %d\n", hr, min, sec);
    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec){
    *hr = total_sec/3600;
    total_sec -= *hr / 3600;
    *min = total_sec / 60;
    total_sec -= *min * 60;
    *sec = total_sec;
}