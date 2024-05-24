#include <iostream>
using namespace std;
void fibo(int n){
	long long f1=1,f2=1,f;
	for(int i=1;i<=n;i++){
		if(i<3){
			f=1;
		}
		else {
			f=f2+f1;
			f1=f2;
			f2=f;
		}
	}
	cout << f << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		fibo(n);
	}
}
