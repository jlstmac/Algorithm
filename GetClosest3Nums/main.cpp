/*
 * 从一个数组中找出三个元素，使这三个数之和最接近给定的数
 *
 * 输入：0，[1,-1,-2,-3,0,2,1]
 * 输出：[1,-1,0]或[1，-3，2]
 * */

#include <iostream>

void getClosest3Nums(int n, int arr[],int length,int *pRet)
{
    int dif = -1;
    for (int i = 0; i < length - 2; ++i) {
        for (int j = i + 1; j < length -1; ++j) {
            for (int k = j + 1; k < length; ++k) {
                if (abs(arr[i] + arr[j] + arr[k] - n)  < dif || dif < 0){
                    dif = abs(arr[i] + arr[j] + arr[k] - n);
                    pRet[0] = arr[i];
                    pRet[1] = arr[j];
                    pRet[2] = arr[k];
                }
            }
        }
    }
}

int main() {
    int arr[7] = {1,-1,-2,-3,0,2,1};
    int pRet[3];
    getClosest3Nums(8,arr,7,pRet);
    for (int i = 0; i < 3; ++i) {
        printf("%d,",pRet[i]);
    }
    return 0;
}