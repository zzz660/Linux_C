/*
用位操作实现无符号整数的乘法运算
*/

#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y)
{
    unsigned int result = 0;
    unsigned int mask = 0x00000001;
    for (int i = 0; i < 32; ++i) {
        if ((y >> i) & mask == 1) result += x << i;
    }
    return result;
}

int main(void)
{
    unsigned int x = 27;
    unsigned int y = 18;
    printf("%d\n", multiply(x, y));
    return 0;
}