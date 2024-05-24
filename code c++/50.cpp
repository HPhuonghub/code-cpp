#include <bits/stdc++.h>
using namespace std;
int uoc(int n){
	int a=sqrt(n);
	int dem=2;
	for(int i=2;i<a;i++){
		if(n%i==0){
			dem+=2;
		}
	}
	if(a*a==n){
		dem++;
	}
	return dem;
}
int main(){
	int n,a=0;
	cin >> n;
	for(int i=0;i<n;i++){
		if(uoc(i)==9){
			cout << i << " ";
		}
	}
}