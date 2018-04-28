#include <iostream>
using namespace std;

bool isPalindromic(string s,int start, int end){
    for (int i = start;i < (end + start + 1)/2;i++)
    {
        if (s[i] != s[end + start - i])
            return false;
    }
    return true;
}

string longestPalindrome(string s) {
    string ret = string("");
    int length = s.length(),retLength = 0;
    for (int i = 0; i < length - retLength; ++i) {
        for (int j = i+retLength ; j < length ; ++j) {
            if (isPalindromic(s,i,j))
            {
                ret = s.substr(i,j - i + 1);
                retLength = j-i+1;
            }
        }
    }
    return ret;
}

int main() {
    string s = string("sdgsadgasdgeddddsadgwegdg");
    string sub = longestPalindrome(s);
    printf("%s",&sub);
    return 0;
}