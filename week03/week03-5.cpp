class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s+s;///�ƻs�⦸
        int N = s2.length();///�s������N
        return s2.substr(1,N-2).find(s) != string::npos;
    }
};
