///�n�դ@��C++2011 c++11���\��
#include <iostream>
#include <vector>
#include <unordered_map>///c++11���\��
///Setting �]�w - Compiler �sĶ���A ��11
using namespace std;
int main()
{
    vector<int> a;
    unordered_map<int,int> m;///�p�G�ιw�]�� c++98�A�|����
    m[999] = 13;///Bash Map�����A�i�H�ֳt���A�������Y�ӭ�
    m[137] = 7;
    cout << "m[999] ���ȬO " << m[999] << endl;
    cout << "m[137] ���ȬO " << m[137] << endl;
    return 0;
}
