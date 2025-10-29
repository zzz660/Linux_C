#include <stdio.h>

int main(int argc, int *argv[])
{
    char s[] = "hello";
    char *a = s;
    char **const p = &a;
    **p = 'l';
    printf("%s\n", s);
    return 0;
}
