#include <iostream>
using namespace std;
int main()
{
	int a, b;///Step1:Input
	while(cin >> a >> b){
		if(b==1){///Step6:special case
			cout << "Boring!\n";
			continue;
		}
		int bad=0, backup=a;///Step5:backup
		while(a>1){///Step3:­é¥Öªk
			if(a%b>0) bad=1;///Step4:bad
			a = a/b;
		}///Step4:bad
		if(bad==1) cout << "Boring!\n";
		else{
			a = backup;///Step5:backup
			while(a>1){///Step3:­é¥Öªk
				cout << a << " ";
				a = a/b;
			}
			cout << "1\n";
		}
	}///Step2:Output
}
