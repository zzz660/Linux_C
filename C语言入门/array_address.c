#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a[10];
    a[0] = rand();
    printf("%p %p", &a[0], &a[1]);
    return 0;
}