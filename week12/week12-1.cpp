///�Q�F�� Linked List �� Node
///������e�ǹL�� class vs. struct
#include <iostream>
#include <string>///�A�[�o��
using namespace std;
///struct Node {};
///class Cat {};
///���n�j�A���A�N�|�ͤU�A���B����
struct Node{
    int val;///value��
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1;///�j�g���Ϊ��A�ŧi�p�g���ܼ�
    cat1.name = "Kitty";
    Node node;
    node.val = 1;
}///����ɨS��Compiler Error�Y�i(�{���u���ơA����O������)
