class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss>>word){
            ///什麼事都不做
        }
        return word.length();
    }
};
