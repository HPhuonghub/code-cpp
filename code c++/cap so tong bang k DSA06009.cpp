#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int m){
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==m){
				dem++;
			}
		}
	}
	cout << dem << endl;
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