#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuli(int a[],int b[][100000],int n,int m){
	for(int i=0;i<n;i++){
		int h=abs(a[i]-m);
		b[0][i]=h;
	}
	for(int i=0;i<n;i++){
		b[1][i]=a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(b[0][i]>b[0][j]){
				int d=b[0][i];
				b[0][i]=b[0][j];
				b[0][j]=d;
				int c=b[1][i];
				b[1][i]=b[1][j];
				b[1][j]=c;
			}
		}
	}
}
void xuat(int b[][100000],int n){
	for(int i=0;i<n;i++){
		cout << b[1][i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[2][100000];
		nhap(a,n);
		xuli(a,b,n,m);
		xuat(b,n);
	}
}
