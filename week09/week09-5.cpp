class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;///這個有時候是答案，但有時候會比較小
        if(low%2==1 || high%2==1) ans++;///如果頭尾有單數，要在加一個數
        return ans;

    }
};
