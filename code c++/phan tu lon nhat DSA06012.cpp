#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
}
void xuat(int a[],int n,int k){
	for(int i=n-1;i>=n-k;i--){
		cout << a[i] << " ";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		nhap(a,n);
		xuat(a,n,k);
		cout << endl;
	}
}