class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size();///左手M
        int N = matrix[0].size();///右手N
        vector<bool> left(M);///有M格
        vector<bool> up(M);///有N格
        for(int i=0; i<M; i++){///先用完整的迴圈，檢查全部的0在哪裡
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){///如果是0，就在左邊
                    left[i] = true;///左邊left[i]
                    up[j] = true;///右邊up[j]
                }
            }
        }
        for(int i=0; i<M; i++){///有個迴圈，照著巡left[i]的值
            if(left[i]==true){
                for(int j=0; j<N; j++) matrix[i][j] = 0;///再把整行都清為0
            }
        }
        for(int j=0; j<N; j++){///有個迴圈，照著巡up[j]的值
            if(up[j]==true){
                for(int i=0; i<M; i++) matrix[i][j] = 0;///再把整行都清為0
            }
        }
    }
};
