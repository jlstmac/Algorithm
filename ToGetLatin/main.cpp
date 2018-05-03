//A sentence S is given, composed of words separated by spaces. Each word consists of lowercase and uppercase letters only.
//
//We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.)
//
//The rules of Goat Latin are as follows:
//
//If a word begins with a vowel (a, e, i, o, or u), append "ma" to the end of the word.
//For example, the word 'apple' becomes 'applema'.
//
//If a word begins with a consonant (i.e. not a vowel), remove the first letter and append it to the end, then add "ma".
//For example, the word "goat" becomes "oatgma".
//
//Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
//For example, the first word gets "a" added to the end, the second word gets "aa" added to the end and so on.
//Return the final sentence representing the conversion from S to Goat Latin.
//
//Example 1:
//
//Input: "I speak Goat Latin"
//Output: "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"
//Example 2:
//
//Input: "The quick brown fox jumped over the lazy dog"
//Output: "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"

#include <iostream>
using namespace std;

string toGoatLatin(string S)
{
    string latin = string("");
    bool isEnd = false;
    bool isStart = true;
    int index = 1,start = 0,end = 0;
    bool isVowel = false;

    for (int i = 0; i < S.length(); ++i) {
        if(i == S.length() - 1) {
            end = i;
            isEnd = true;
            if (isStart)
                start = i;


        }else if (S[i] == ' '){
            end = i - 1;
            isEnd = true;
            isStart = true;
        }else if (S[i] != ' ' && isStart) {
            start = i;
            isEnd = false;
            isStart = false;
            if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U'){
                isVowel = true;
            }else{
                isVowel = false;
            }
        }
        if (isEnd){
            if (isVowel){
                latin.append(S.substr(start,end - start + 1));
            }else{
                latin.append(S.substr(start+1,end - start));
                latin.append(S.substr(start,1));
            }
            latin.append("ma");
            latin.append(index++,'a');
            if (S[i] == ' ')
                latin.append(1,' ');
        }
    }
    return latin;
}

int main() {
    string s = string("I speak Goat Latin");
    string latin = toGoatLatin(s);
    printf("%s",&latin);
    return 0;
}