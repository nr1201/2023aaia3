///進階的 class 裡面有建構函式、有資料、有方法
#include <iostream>
#include <string>
using namespace std;
class Cat{
public:
    Cat(string _name){
        name = _name;
    }
    string name;
    void print(){
        cout << "I'm a cat. My name is " << name << ".\n";
    }
};

int main(){
    Cat cat1("小花"), cat2("小白");
    cat1.print();
    cat2.print();
}
