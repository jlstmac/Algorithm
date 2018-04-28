#include <iostream>

//倒置数组中的一段数据
void reverse(int arr[], int start, int end)
{
    while (start < end){
        arr[start] += arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] -= arr[end];
        start++;
        end--;
    }
}

//左移：把数组ab变成ba
void removeToLeft(int source[],int i,int length)
{
    reverse(source,0,i);//a(r)b
    reverse(source,i+1,length - 1);//a(r)b(r)
    reverse(source,0,length - 1);//(a(r)b(r))(r)=ba
}

int main() {
    int arr[9] = {-3,-2,-1,0,1,2,3,4,5};

    removeToLeft(arr,4,9);
    for (int i = 0; i < 9; ++i) {
        printf("%d,",arr[i]);
    }

    return 0;
}