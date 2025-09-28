
#include <stdio.h>

int factorial(int n)
{
    if (n == 1)          // 递归结束条件
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void)
{
    int x = 5;
    int result = factorial(x);
    printf("factorial(%d) = %d\n", x, result);
    return 0;
}
