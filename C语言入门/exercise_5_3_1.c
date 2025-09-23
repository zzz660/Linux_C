#include<stdio.h>

int GCD(int a, int b){
    if (a % b == 0)
        return b;
    else
        return GCD(b, a%b);
}

int main(void){
    int a = -12;
    int b = 27;
    printf("the Greatest Common Divisor of %d and %d is %d.\n", a, b, GCD(a, b));
    return 0;
}
