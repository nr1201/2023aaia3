#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
	cin >> a;
	cin >> b;
	int n1 = a.length(), n2 = b.length();
	if(n1>n2) cout << 1;
	else if(n1<n2) cout << -1;
	else{
		cout << a.compare(b);
	}
}
