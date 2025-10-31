#include <stdio.h>   // 提供printf函数声明
#include <stdlib.h>  // 提供srand、rand函数声明

// 符合规范的函数1：生成10个随机数的数组
int (*gen_random(void *seed))[10] {
    static int arr[10];  // 静态数组，避免栈区内存释放
    srand((unsigned long)seed);  // 初始化随机数种子
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;  // 生成0-99的随机数
    }
    return &arr;  // 返回数组指针（保留数组大小信息）
}

// 符合规范的函数2：生成10个递增数的数组（从start开始）
int (*gen_increment(void *start))[10] {
    static int arr[10];
    int s = *(int*)start;  // 转换void*为int*并取值
    for (int i = 0; i < 10; i++) {
        arr[i] = s + i;  // 生成递增序列
    }
    return &arr;
}

// 主逻辑：通过函数指针统一调用不同函数
void process(int (*(*func)(void *))[10], void *param) {
    int (*arr_ptr)[10] = func(param);  // 调用函数，获取数组指针
    for (int i = 0; i < 10; i++) {
        printf("%d ", (*arr_ptr)[i]);  // 解引用数组指针访问元素
    }
    printf("\n");
}

int main() {
    int start = 5;
    process(gen_random, (void*)123);   // 传递随机数种子，调用gen_random
    process(gen_increment, &start);    // 传递起始值，调用gen_increment
    return 0;
}