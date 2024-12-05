#include <iostream>
using namespace std;
int helper(int a, int b){///Step3:function
	return 3;
}
int main()
{
	int a, b;
	while(cin >> a >> b){///Step1:Input
		if(a==0 && b==0) break;
		int ans = helper(a, b);///Step3:function
		if(ans==0) cout << "No carry operation.\n";
		else if(ans==1) cout << "1 carry operation.\n";
		else cout << " carry operations.\n";
	}///Step2:Output
}
