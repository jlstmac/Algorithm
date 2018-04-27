//There are two sorted arrays nums1 and nums2 of size m and n respectively.
//Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
//找出两个有序数组的中值

#include <iostream>

float findMedian(int source1[],int m,int source2[],int n)
{
    int target = (m+n)/2,p1 = 0,p2 = 0,p3 = 0,ret = 0,lastRet = 0;

        while ( p3 <= target){
            lastRet = ret;
            if ( (p1 < m && p2 < n && source1[p1] > source2[p2]) || p1 >= m ){
                ret = source2[p2++];
            }else{
                ret = source1[p1++];
            }
            ++p3;
        }

    return ((m+n)%2 == 0) ? (ret+lastRet)/2.0 : ret;
    
}

int main() {

    int s1[3] = {1,4,5};
    int s2[3] = {1,2,7};
    float pRet = findMedian(s1,3,s2,3);
    printf("midia:%f",pRet);
    return 0;
}