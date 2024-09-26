class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s+s;///複製兩次
        int N = s2.length();///新的長度N
        return s2.substr(1,N-2).find(s) != string::npos;
    }
};
