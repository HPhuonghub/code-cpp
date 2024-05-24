#include <bits/stdc++.h>
using namespace std;
int min(int n,int m){
	return n < m ? n : m;
}
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
	cout << endl;
}
void xuli(int a[],int b[],int giao[],int hop[],int n,int m){
	int i=0,j=0,g=0,h=0;
	while(i<n&&j<m){
		if(a[i]==b[j]){
			giao[g]=a[i];
			hop[h]=a[i];
			i++; j++;
			g++; h++;
		}
		else if(a[i]>b[j]){
			hop[h++]=b[j++];
		}
		else{
			hop[h++]=a[i++];
		}
	}
	while(i<n){
		hop[h++]=a[i++];
	}
	while(j<m){
		hop[h++]=b[j++];
	}
	xuat(hop,h);
	xuat(giao,g);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m],giao[min(n,m)],hop[n+m];
		nhap(a,n);
		nhap(b,m);
		xuli(a,b,giao,hop,n,m);
	}
}