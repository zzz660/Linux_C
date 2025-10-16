/*
统计一个无符号整数的二进制表示中1的个数
*/
#include <stdio.h>

int countbit(unsigned int x)
{
    int num = 0;
    unsigned int mask = 0x00000001;
    for (int i = 0; i < 32; ++i) {
        num += (x >> i) & mask;
    }
    return num;
}

int main(void)
{
    unsigned int x = 0xff0fffff;
    printf("%d\n", countbit(x));
    return 0;
}