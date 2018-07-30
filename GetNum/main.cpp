/*
 *实现一个函数getNum,按如下规则输出
 *
 *输入：n            输出：13
 *
 *已知数列规则为[1,3,7,13,21,31,43...],计数从0开始
 *
 * */


#include <iostream>

int getNum(int n)
{
    if (n > 0)
    {
        return getNum(n - 1) + 2*n;
    }else{
        return 1;
    }
}

int main() {
    int x = getNum(6);
    printf("x:%d",x);
    return 0;
}