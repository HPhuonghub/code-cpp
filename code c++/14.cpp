#include <iostream>
#include <math.h>
using namespace std;

int TongCacChuSo(long n){
	long s=0;
	while(n>0){
		int m=n%10;
		s=s+m;
		n=n/10;
	}
	return s;
}
int TongNhantu(long n){
	int r=0;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			n=n/i;
			r=r+TongCacChuSo(i);
		}
	}
	return r;
}
int main(){
	long n;
	cin >> n;
	if(TongCacChuSo(n)==TongNhanTu(n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
