class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;///�o�Ӧ��ɭԬO���סA�����ɭԷ|����p
        if(low%2==1 || high%2==1) ans++;///�p�G�Y������ơA�n�b�[�@�Ӽ�
        return ans;

    }
};
