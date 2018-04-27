//归并排序（mergesort）
//主要思想：分治法，把数组划分成前后两部分，分别排序，然后将两个有序数组合并。
//实现概要：
// 1，实现merge方法，merge方法是（将两个有序数组合并）。
// 2，实现mergeSort方法，利用递归的思想，将source数组划分两部分并排序（划分到start=end-1为止），最后合并（merge）。

#include <iostream>

void merge(int source[],int temp[],int start,int mid,int end) {
    int i = start, j = mid + 1,z = start;
    while (i <= mid && j <= end)
    {
        if (source[i] > source[j])
            temp[z++] = source[j++];
        else
            temp[z++] = source[i++];
    }
    while (i <= mid)
        temp[z++] = source[i++];
    while (j <= end)
        temp[z++] = source[j++];
    for (int k = start; k <=end ; ++k) {
        source[k] = temp[k];
    }
}

void mergeSort(int source[], int temp[], int start, int end) {
    int mid;
    if (start < end ){
        mid = (start + end)/2;
        mergeSort(source,temp,start,mid);
        mergeSort(source,temp,mid+1,end);
        merge(source,temp,start,mid,end);
    }
}

int main() {
    int source[10] = {9,8,7,6,5,4,3,2,1,0};
    int temp[10];
    mergeSort(source,temp,0,9);
    for (int i = 0; i < 10; ++i) {
        printf("%d,",source[i]);
    }
    return 0;
}