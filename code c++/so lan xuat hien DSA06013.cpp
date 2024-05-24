#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int m){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==m){
			dem++;
		}
	}
	if(dem==0){
		cout << "-1" << endl;
	}
	else cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n];
		nhap(a,n);
		xuat(a,n,m);
	}
}