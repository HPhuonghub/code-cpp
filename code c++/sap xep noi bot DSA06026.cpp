#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int m=1,dem;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				dem++;
			}
		}
		if(dem>0){
			cout << "Buoc " << m << ": ";
			for(int i=0;i<n;i++){
				cout << a[i] << " ";
			}
			cout << endl;
			m++;
			dem=0;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	nhap(a,n);
	xuat(a,n);
}