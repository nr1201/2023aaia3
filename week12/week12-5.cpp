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
		int bad=0;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(a[i][j]<0) bad=1;
				if(a[i][j] != a[N-1-i][N-1-j]) bad=1;
			}
		}
		if(bad==0) cout << "Test #" << t << ": Symmetric.\n";
		else cout << "Test #" << t << ": Non-symmetric.\n";
	}///Step2:Output
}
