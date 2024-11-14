class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0, d10=0, d20=0;///開始時，老闆沒零錢
        for(int c : bills){///進階的for迴圈
            if(c==5) d5++;
            if(c==10) {///客人要找5元
                if(d5>0){///如果有5元可以找
                    d10++;///拿到10元
                    d5--;///找5元
                }else return false;///沒辦法找錢
            }
            if(c==20){///客人要找15元
                if(d10>0 && d5>0){
                    d20++;///拿到20元
                    d10--;///找1個10元
                    d5--;///找1個5元
                }else if(d5>=3){
                    d20++;
                    d5 -= 3;
                }else return false;///沒辦法找錢
            }
        }
        return true;///全部都沒出錯
    }
};
