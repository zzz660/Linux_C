#include <stdio.h>

void diamond(int n, char c){
    int cnt = 1;
    for (int i=1; i<=(n/2+1); ++i){
        for (int j=1; j<=(n/2+1+(i-1)); ++j){
            if (cnt < (n/2+1-(i-1))) {
                printf("\t");
                cnt += 1;
            } 
            else printf("%c\t", c);
        }
        cnt = 1;
        printf("\n");
    }
    for (int i=n/2; i>=1; --i){
        for (int j=1; j<=(n/2+1+(i-1)); ++j){
            if (cnt < (n/2+1-(i-1))) {
                printf("\t");
                cnt += 1;
            } 
            else printf("%c\t", c);
        }
        cnt = 1;
        printf("\n");
    }
}

int main(void){
    diamond(3, '*');
    return 0;
}