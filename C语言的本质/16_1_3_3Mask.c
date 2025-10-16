/*
对一个32位无符号整数做循环右移
*/
#include <stdio.h>

unsigned int rotate_right(unsigned int x, int n)
{
    n = n % 32;
    if (n == 0) return n;
    return ((x >> n | x << (32 - n)));
}

int main(void)
{
    unsigned int x = 0xdeadbeef;
    int n = 16;
    printf("0x%08x\n", rotate_right(x, n));
    return 0;
}