#include <bits/stdc++.h>
using namespace std;
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int kt(int n){
	int t=0;
	while(n>0){
		int m=n%10;
		t=t*10+m;
		n=n/10;
	}
	if(snt(t)==1){
		return 1;
	}
	else return 0;
}
int test(int n){
	while(n>0){
		int m=n%10;
		if(snt(m)!=1){
			return 0;
		}
		n=n/10;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(snt(n)==1&&kt(n)==1&&test(n)==1){
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;
	}
}