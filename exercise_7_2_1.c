#include<stdio.h>

struct complex_struct {
	double x, y;
};

void print_complex(struct complex_struct z){
    if (z.y==0) printf("%.1f\n", z.x);
    else if (z.x==0) printf("%.1f\n", z.y);
    else printf("%.1f+%.1fi\n", z.x, z.y);
}

int main(void){
    struct complex_struct z = {1.0, 1.0};
    print_complex(z);
    return 0;
}