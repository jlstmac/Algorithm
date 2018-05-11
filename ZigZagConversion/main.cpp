//https://leetcode.com/problems/zigzag-conversion/description/
//
//The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
//
//P   A   H   N
//A P L S I I G
//Y   I   R
//And then read line by line: "PAHNAPLSIIGYIR"
//
//Write the code that will take a string and make this conversion given a number of rows:
//
//string convert(string s, int numRows);
//Example 1:
//
//Input: s = "PAYPALISHIRING", numRows = 3
//Output: "PAHNAPLSIIGYIR"
//Example 2:
//
//Input: s = "PAYPALISHIRING", numRows = 4
//Output: "PINALSIGYAHRPI"
//Explanation:
//
//P     I    N
//A   L S  I G
//Y A   H R
//P     I
//
//
//ZigZag就是Z字行的意思，如上所示，从上到下，再斜着向上，把一个字符串像N字行排列。

#include <iostream>
using namespace std;

//基本方法：2*O(n2)
string convert01(string s, int numRows) {
    int length = s.length();
    if (length <= numRows || numRows <= 1) return s;
    int rowNum = numRows + numRows - 2,p = 0;
    int width = (length/(rowNum))*2 + ((length%(rowNum) > numRows) ? 2 : 1);
    char temp[width][numRows];
    memset(temp,0x00,sizeof(char)*width*numRows);
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < numRows && p < length; ++j) {
            int t = j;
            if (i%2 != 0 )
            {
                if(j == 0 || j == numRows -1 )
                    continue;
                else
                    t = numRows - 1 - t;
            }
            temp[i][t] = s[p++];
        }
    }

    p = 0;
    char ret[length];
    for (int k = 0; k < numRows ; ++k) {
        for (int x = 0; x < width && p < length; ++x) {
            if (temp[x][k])
                ret[p++] = temp[x][k];
        }
    }
    return string(ret,length);
}

//提高
string convert(string s, int numRows) {
    int length = s.length();
    if (length <= numRows || numRows <= 1) return s;
    int inteval = numRows + numRows - 2,p = 0;
    char ret[length];
    for (int i = 0; i < length; i += inteval) {
        ret[p++] = s[i];
    }
    for (int row = 1; row < numRows - 1; row ++) {
        for (int j = 0; j < ; ++j) {
            
        }
        ret[p++] = s[i];
    }
    for (int i = numRows - 1; i < length; i += inteval) {
        ret[p++] = s[i];
    }
}

int main() {
    string s = string("PAYPALISHIRING");
    string ret = convert01(s,4);
    printf("%s",&ret);
    return 0;
}