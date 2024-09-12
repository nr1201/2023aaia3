#include <iostream>
using namespace std;///使用命名空間
int main()
{
	int n;
	cin >> n;

	cout << n;
	cout << "=50*";
	cout << n / 50;
	cout << "+5*";
	cout << n%50 / 5;
	cout << "+1*";
	cout << n%5;
	cout << "\n";
}
