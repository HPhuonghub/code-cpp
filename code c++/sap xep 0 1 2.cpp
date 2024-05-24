#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		nhap(a,n);
		xuat(a,n);
		cout << endl;
	}
}