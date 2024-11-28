#include <iostream>
using namespace std;
int a[100][100];///Step3:2D Array
int main()
{
	int T, N;
	cin >> T;///Step1:Input
	for(int t=1; t<=T; t++){
		char c, c2;///'N' '=' 3
		cin >> c >> c2 >> N;///Step1:Input
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> a[i][j];///Step3:2D Array
			}
		}
		cout << "Test #" << t << ": Symmetric.\n";
	}///Step2:Output
}
