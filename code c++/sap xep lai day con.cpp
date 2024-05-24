#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				cout << i+1;
				goto a;
			}
		}
	}
	a:
		cout << " ";
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[i]){
				cout << i+1;
				goto thoat;
			}
		}
	}
	thoat:
		cout << endl;
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
	}
}