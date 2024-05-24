#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,a=0;
		cin >> n;
		if(n==1) cout << 1 <<endl;
		else{
			for(int i=9;i>1;i--){
				while(n%i==0&&n>1){
					a=a*10+i;
					n=n/i;
				}
			}
			long long b=0;
			while(a>0){
				b=b*10+a%10;
				a=a/10;
			}
			if(n>1) cout << -1 << endl;
			else cout << b << endl;
			}
	}
}