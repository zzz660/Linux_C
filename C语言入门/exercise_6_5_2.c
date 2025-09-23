#include <stdio.h>

void diamond(int n, char c){
    for (int i=1; i<=(n/2+1); ++i){
        for (int j=1; j<=(2*i-1); ++j){
            printf("%c ", c);
        }
        printf("\n");
    }
    for (int i=n/2; i>=1; --i){
        for (int j=1; j<=(2*i-1); ++j){
            printf("%c ", c);
        }
        printf("\n");
    }
}

int main(void){
    diamond(3, '*');
    return 0;
}