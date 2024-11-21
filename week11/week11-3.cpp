///想看看Hash Map的對照表強處
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["000"] = 12345678;///左邊放字串，右邊放 int 整數
    m["XXX"] = 87654321;
    cout << "000的學號是:" << m["000"] << endl;
    cout << "XXX的學號是:" << m["XXX"] << endl;
}
