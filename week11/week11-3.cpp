///�Q�ݬ�Hash Map����Ӫ�j�B
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["000"] = 12345678;///�����r��A�k��� int ���
    m["XXX"] = 87654321;
    cout << "000���Ǹ��O:" << m["000"] << endl;
    cout << "XXX���Ǹ��O:" << m["XXX"] << endl;
}
