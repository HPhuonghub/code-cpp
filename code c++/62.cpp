#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int dem=0;
	for(int i=0;i<n-1;i++){
		int min=a[i],h,m=0;
		for(int j=i+1;j<n;j++){
			if(min>a[j]){
				min=a[j];
				h=j;
				m++;
			}
		}
		if(m>0){
			int k=a[i];
			a[i]=a[h];
			a[h]=k;
			dem++;
			m=0;
		}
	}
	cout << dem << endl;
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