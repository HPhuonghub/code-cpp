#include <iostream>
#include <math.h>
using namespace std;

int snt(int n){
	if(n<2){
		return 0;
	}
	int a=sqrt(n);
	for(int i=2;i<=a;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=2;i<=n;i++){
			if(snt(i)==1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
