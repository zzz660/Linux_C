#include <stdio.h>
int a[1000];

int partition(int start, int end)
{
    int pivot = a[start];
    int i = start;
    int j = end;

    while(1){
        while(a[i] <= pivot) ++i;   // 去掉等号，避免i越界
        while(a[j] >= pivot) --j;

        if (i >= j) return j;
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}

void quicksort(int start, int end)
{
	int mid;
	if (end > start) {
		mid = partition(start, end);
		quicksort(start, mid-1);
		quicksort(mid+1, end);
	}
}

int main(void)
{
    int n = 6;
    int arr[] = {3, 5, 1, 6, 9, 7};
    for (int i = 0; i < 6; ++i) a[i] = arr[i];
    quicksort(0, n-1); 
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}