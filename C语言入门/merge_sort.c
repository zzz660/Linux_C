// 归并排序示例
#include <stdio.h>
#define LEN 8
int a[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6 };

void merge(int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int left[n1], right[n2];
    int i, j, k;
    for (i = 0; i < n1; ++i) left[i] = a[start + i];
    for (j = 0; j < n2; ++j) right[j] = a[mid + 1 + j];

    i = j = 0;
    k = start;
    while (i < n1 && j < n2){
        if (left[i] > right[j]) a[k++] = right[j++];
        else a[k++] = left[i++];
    }

    while(i < n1) a[k++] = left[i++];
    while(j < n2) a[k++] = right[j++];
}

void sort(int start, int end)
{
    int mid;
    if (start < end){
        mid = (start + end) / 2;
        sort(start, mid);
        sort(mid + 1, end);
        merge(start, mid, end);
    }
}

int main()
{
    sort(0, LEN - 1);
    printf("%d %d %d %d %d %d %d %d\n", 
		    a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    return 0;
}