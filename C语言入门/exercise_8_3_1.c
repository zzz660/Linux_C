#include <stdio.h>
#include <stdlib.h>
#define N 20

int a[N];

// find the max vlue in histogram
int max_value(int *a){
	int maxV = a[0];
	for (int i=1; i<10; ++i){
		if (maxV < a[i])
			maxV = a[i];
	}
	return maxV;
}

// generate random variable
void gen_random(int upper_bound)
{
	int i;
	for (i = 0; i < N; i++)
		a[i] = rand() % upper_bound;
}

// print histogram
void print_random(int *histogram)
{
	int i;
	for (i = 0; i < 10; i++) printf("%d ", i);
    printf("\n");
    int deep = max_value(histogram);
    for (i = 0; i < deep; ++i) {
		for (int j=0; j<10; j++){
			if (histogram[j]!=0) {
            	printf("* ");
				histogram[j] -= 1;
        	}
            else printf("  ");
		}
        if (i<(deep-1))printf("\n");
    }	
}

int main(void)
{
    int histogram[10] = {0};
	gen_random(10);
    for (int i=0; i<20; ++i)  histogram[a[i]]++;
	print_random(histogram);
	return 0;
}