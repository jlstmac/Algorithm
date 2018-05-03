#include <iostream>
using namespace std;

int expandAroundCenter(string s, int left, int right) {
    int L = left, R = right;
    while (L >= 0 && R < s.length() && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
}

string longestPalindrome(string s) {
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++) {
        int len1 = expandAroundCenter(s, i, i);//假设i是回文中间点，以i对称
        int len2 = expandAroundCenter(s, i, i + 1);//假设i是回文中间点，以i和i+1对称
        int len = max(len1, len2);
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    return s.substr(start, end - start + 1);
}
int main() {
    string s = string("scbbdda");
    string pRet = longestPalindrome(s);
    printf("%s",&pRet);
    return 0;
}