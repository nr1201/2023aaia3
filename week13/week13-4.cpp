///�� Advent of Code 2024 Day 1 �D��
///�e���_�⦡���w�g�g�n�F
int main() {
    vector<int> A, B;///2�Ӱ}�C
    int a, b;///2�Ӽ�
    while(cin >> a >> b){///Step1:Input
        A.push_back(a);///Step2:���}�C
        B.push_back(b);
    }
    sort(A.begin(), A.end());///sort�Ѥp��j�Ʀn
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size(); i++){///Step3:Output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << "���׬O: " << ans;
}
