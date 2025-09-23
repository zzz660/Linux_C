#include <stdio.h>

void foo(void){
    int i;
    printf("%d\n", i);
    i = 777;
}

int main(){
    foo();
    printf("Hello word.\n");
    foo();
    return 0;
}
