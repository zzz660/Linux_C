#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b){  
	if (a % b == 0)  
		return b;  
	else  
		return GCD(b, a%b);  
}

struct rational {
    int x, y; 
};

struct rational make_rational(int a, int b){
    struct rational z;
    z.x = a;
    z.y = b;
    return z;
}

struct rational add_rational(struct rational a, struct rational b){
    struct rational tmp;
    int fenzi = a.x*b.y + b.x*a.y;
    int fenmu = a.y*b.y;
    int common_divisor = GCD(fenzi, fenmu);
    tmp.x = fenzi/common_divisor;
    tmp.y = fenmu/common_divisor;
    return tmp;
}

struct rational sub_rational(struct rational a, struct rational b){
    struct rational tmp;
    int fenzi = a.x*b.y - b.x*a.y;
    int fenmu = a.y*b.y;
    int common_divisor = GCD(fenzi, fenmu);
    tmp.x = fenzi/common_divisor;
    tmp.y = fenmu/common_divisor;
    return tmp;
}

struct rational mul_rational(struct rational a, struct rational b){
    struct rational tmp;
    int fenzi = a.x*b.x;
    int fenmu = a.y*b.y;
    int common_divisor = GCD(fenzi, fenmu);
    tmp.x = fenzi/common_divisor;
    tmp.y = fenmu/common_divisor;
    return tmp;
}

struct rational div_rational(struct rational a, struct rational b){
    struct rational tmp;
    int fenzi = a.x*b.y;
    int fenmu = a.y*b.x;
    int common_divisor = GCD(fenzi, fenmu);
    tmp.x = fenzi/common_divisor;
    tmp.y = fenmu/common_divisor;
    return tmp;
}

void print_rational(struct rational a){
    if (a.x==0) printf("0\n");
    else if (a.y==0) printf("infinite");
    else if (a.x==a.y) printf("1\n");
    else if (a.x==(-a.y)) printf("-1\n");
    else if (a.x*a.y > 0) printf("%d/%d\n", abs(a.x), abs(a.y));
    else printf("-%d/%d\n", abs(a.x), abs(a.y));
}

int main(void)
{
	struct rational a = make_rational(1, 8); /* a=1/8 */
	struct rational b = make_rational(-1, 8); /* b=-1/8 */
	print_rational(add_rational(a, b));
	print_rational(sub_rational(a, b));
	print_rational(mul_rational(a, b));
	print_rational(div_rational(a, b));

	return 0;
}