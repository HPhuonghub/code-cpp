#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuli(int a[],int b[],int c[],int n,int m){
	int k=0;
	for(int i=0;i<n;i++){
		c[k]=a[i];
		k++;
	}
	for(int i=0;i<m;i++){
		c[k]=b[i];
		k++;
	}
	sort(c,c+n+m);
}
void xuat(int c[],int n,int m){
	for(int i=0;i<n+m;i++){
		cout << c[i] << " ";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m],c[n+m];
		nhap(a,n);
		nhap(b,m);
		xuli(a,b,c,n,m);
		xuat(c,n,m);
		cout << endl;
	}
}