/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 */
#include <iostream>
#include "math.h"

int reverse(int x)
{
    int pRet = 0;
    while (x != 0 )
    {
        if (pRet > (pow(2,31) - 1 )/10 || pRet <  -pow(2,31)/10)
            return 0;
        int e = x % 10;
        x /= 10;
        pRet = pRet*10 + e;

    }
    return pRet;
}

int main()
{
    int x = 1463847412;
    int pRet = reverse(x);
    printf("reverse integer:%d",pRet );
    return 0;
}