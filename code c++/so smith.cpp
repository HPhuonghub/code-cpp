#include <iostream>
#include <math.h>
using namespace std;

int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int Tong(int n){
	int r=0;
	while(n>0){
		int m=n%10;
		    n=n/10;
		    r=r+m;
	}
	return r;
}
int TongUoc(int n){
	int s=0,j=2;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			n=n/i;
			s=s+Tong(i);
		}
	}
	return s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(Tong(n)==TongUoc(n)&&snt(n)!=1){
			cout << "YES" << endl;
		}
		else
		    cout << "NO" << endl;
	}
}
