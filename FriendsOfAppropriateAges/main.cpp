#include <iostream>

//Some people will make friend requests. The list of their ages is given and ages[i] is the age of the ith person.
//
//Person A will NOT friend request person B (B != A) if any of the following conditions are true:
//
//age[B] <= 0.5 * age[A] + 7
//age[B] > age[A]
//age[B] > 100 && age[A] < 100
//Otherwise, A will friend request B.
//
//Note that if A requests B, B does not necessarily request A.  Also, people will not friend request themselves.
//
//How many total friend requests are made?
//
//Example 1:
//
//Input: [16,16]
//Output: 2
//Explanation: 2 people friend request each other.
//Example 2:
//
//Input: [16,17,18]
//Output: 2
//Explanation: Friend requests are made 17 -> 16, 18 -> 17.
//Example 3:
//
//Input: [20,30,100,110,120]
//Output:
//Explanation: Friend requests are made 110 -> 100, 120 -> 110, 120 -> 100.

#import <vector>
using namespace std;

int isRequset(int i,int j)
{
    if (j <= 0.5*i + 7 || j > i || (j > 100 && i < 100))
        return 0;
    return  1;
}
int numFriendRequests(vector<int>& ages) {
    int ret = 0;
    vector<int> age(120,0);

    for (int i = 0; i < ages.size(); ++i) {
        age[ages[i] - 1] = age[ages[i] - 1] + 1;
    }
    for (int i = 0; i < age.size(); ++i) {
        if (age[i] > 1) {
            ret += isRequset(i+1,i+1)*(age[i]*(age[i]-1));
        }
        for (int j = i+1; j < age.size(); ++j) {
            if (age[i] > 0 && age[j] > 0){
                int num = age[i]*age[j];
                ret += num*isRequset(i+1,j+1);
                ret += num*isRequset(j+1,i+1);
            }
        }
    }
    return  ret;
}
int main() {
    int a[10] = {54,23,102,90,40,74,112,74,76,21};
    vector<int> ages(a,a+10);
    int ret = numFriendRequests(ages);
    printf("%d,%d",ret,ret);
    return 0;
}