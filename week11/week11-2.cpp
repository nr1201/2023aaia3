///要試一試C++2011 c++11的功能
#include <iostream>
#include <vector>
#include <unordered_map>///c++11的功能
///Setting 設定 - Compiler 編譯器， 勾11
using namespace std;
int main()
{
    vector<int> a;
    unordered_map<int,int> m;///如果用預設的 c++98，會不行
    m[999] = 13;///Bash Map雜湊表，可以快速找到，對應的某個值
    m[137] = 7;
    cout << "m[999] 的值是 " << m[999] << endl;
    cout << "m[137] 的值是 " << m[137] << endl;
    return 0;
}
