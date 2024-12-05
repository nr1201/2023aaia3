///解 Advent of Code 2024 Day 1 題目
///前面起手式都已經寫好了
int main() {
    vector<int> A, B;///2個陣列
    int a, b;///2個數
    while(cin >> a >> b){///Step1:Input
        A.push_back(a);///Step2:放到陣列
        B.push_back(b);
    }
    for(int i=0; i<A.size(); i++){
        cout << A[i] << " ";
    }
}
