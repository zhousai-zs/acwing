/* 算法基础课
 * 第一章：基础算法
 * acwing785
 * 快速排序
 */
#include <iostream>
using namespace std;

const int N=100010;

int a[N];

void quick_sort(int arr[], int l, int r)
{
    if(l >= r) return;
    int i = l - 1, j = r + 1;
    int x = arr[(l + r) / 2];
    while(i < j)
    {
        do i ++; while(arr[i] < x);
        do j --; while(arr[j] > x);
        if(i < j) swap(arr[i], arr[j]);
    }
    quick_sort(arr, l, j);
    quick_sort(arr, j+1, r);
}

int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);

    quick_sort(a, 0, n - 1);

    for(int i = 0; i < n; i ++)
        printf("%d ", a[i]);

    return 0;
}

