#include<stdio.h>

int main(void){
    int i = 0;
    int cnt = 0;
    while(i<100){
        if (i % 10 == 9) cnt += 1;
        if (i / 10 == 9) cnt += 1;
        i += 1;
    }
    printf("%d", cnt);
    return 0;
}