#include <stdio.h>
#include "para_callback.h"

void say_hello(void *str)
{
    printf("Hello %s\n", (const char *)str);
}

void count_numbers(void *num)
{
    int n = *(int *)num;
    int i;
    for (i=1; i<=n; ++i) {
        printf("%d ", i);
    }
    putchar('\n');
}

int main(void)
{
    int n = 4;
    repeat_three_times(say_hello, "Guys");
    repeat_three_times(count_numbers, &n);
    return 0;
}