#include <stdio.h>

void foo(int x){
    int units, tens;
    units = x % 10;
    tens = (x % 100) / 10;
    printf("the units digit of variable x is %d, the tens digit of variable x is %d\n", units, tens);
}

int main(void){
    int x = 356;
    foo(x);
    return 0;
}