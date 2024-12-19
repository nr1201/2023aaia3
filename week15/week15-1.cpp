#include <iostream>
#include <string>
using namespace std;///<====
int main()
{
	string hello;/// <====
	int t=1;///Step3:Test Case t
	while(cin >> hello){///Step1:Input
		if(hello=="#") break;
		cout << "Case " << t << ": ENGLISH\n";
		t++;
	}///Step2:Output
}
