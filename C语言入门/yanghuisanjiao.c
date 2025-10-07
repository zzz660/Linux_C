/*
杨辉三角形又称Pascal三角形，它的第i+1行是(a+b)i的展开式的系数。
它的一个重要性质是：三角形中的每个数字等于它两肩上的数字相加。
实际上这就是组合数的性质
*/ 

#include <stdio.h>
#include <stdlib.h>

int** create_2d_array(int rows, int cols)
{
    int** arr = (int**)calloc(rows, sizeof(int*));
    for (int i = 0; i < cols; ++i){
        arr[i] = (int*)calloc(cols, sizeof(int*));
    }
    return arr;
}

void free_2d_array(int** arr, int rows) {
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
}

void yanghui(int n)
{
    int** arr = create_2d_array(n + 1, n + 1);
    arr[1][1] = 1;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= i; ++j){
            if (i == 1) printf("%d ", arr[1][1]);
            else {
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    free(arr);
}

int main(void)
{
    int n; scanf("%d", &n);
    yanghui(n);
    return 0;
}