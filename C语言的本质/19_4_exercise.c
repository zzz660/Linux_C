#include <stdio.h>

union {
    unsigned int i;
    unsigned char c[4];
} test;

void check_endian() {
    test.i = 1;
    
    // 检查第一个字节
    if (test.c[0] == 1) {
        printf("当前平台是小端字节序\n");
    } else {
        printf("当前平台是大端字节序\n");
    }
}

int main() {
    check_endian();
    return 0;
}
