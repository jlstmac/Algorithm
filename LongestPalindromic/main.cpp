#include <iostream>
using namespace std;

bool isPalindromic(string s){
    int length = s.length();
    for (int i = 0;i < length/2;i++)
    {
        if (s[i] != s[length - i - 1])
            return false;
    }
    return true;
}

string longestPalindromicSubString(string s)
{
    string ret = string("");
    for (int i = 0; i < s.length(); ++i) {
        for (int j = i+1; j < s.length() ; ++j) {
            string sub = s.substr(i,j - i + 1);
            if (isPalindromic(sub) && sub.length() > ret.length())
                ret = sub;
        }
    }
    return ret;
}

int main() {
    string s = string("saljfdlasjglasjglwojsldnvosaofhlfslajflsfowewdfasdg");
    string sub = longestPalindromicSubString(s);
    printf("%s",&sub);
    return 0;
}