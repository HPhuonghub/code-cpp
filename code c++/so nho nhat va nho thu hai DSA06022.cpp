#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
}
void xuat(int a[],int n){
	int dem=0;
	for(int i=0;i<n-1;i++){
		if(a[i]!=a[i+1]){
			cout << a[i] << " " << a[i+1] << endl;
			dem++;
			break;
		}
	}
	if(dem==0){
		cout << "-1" << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n;
		int a[n];
		nhap(a,n);
		xuat(a,n);
	}
}