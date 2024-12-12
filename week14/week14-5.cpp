#include <iostream>
using namespace std;
int main()
{
	int a, b;///Step1:Input
	while(cin >> a >> b){
		while(a>0){///Step3:­é¥Öªk
			cout << a << " ";
			a = a/b;
		}
		cout << "Boring!\n";
	}///Step2:Output
}
