#include <stdio.h>

int is_leap_year(int year){
    if ( (!(year%4) && (year%100)) || !(year%400))
        printf("year %d is leap year.\n", year);
    else
        printf("year %d is not leap year.\n", year);
}

int main(void){
    int year = 1936;
    is_leap_year(year);
    return 0;
}