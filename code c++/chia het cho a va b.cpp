#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d,e=0;
		cin >> a >> b >> c >> d;
		for(int i=a;i<=b;i++){
			if(i%c==0||i%d==0){
				e++;
			}
		}
		cout << e << endl;
	}
}	
