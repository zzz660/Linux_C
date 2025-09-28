#include <stdio.h>
#define N 3
int a[N] = {1, 2, 3};

void print_array(void){
    for (int i=0; i<N; ++i) printf("%d ", a[i]);
    printf("\n");
}

void swap(int *a, int *b) {
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void permute(int start){
    if (start == N-1) {
        print_array();
        return;
    }

    for (int i=start; i<N; ++i){
        swap(&a[start], &a[i]);
        permute(start+1);
        swap(&a[start], &a[i]);
    }
}

int main(void){
    permute(0);
    return 0;
}