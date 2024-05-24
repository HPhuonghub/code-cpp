#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int j,t;
	cout << "Buoc 0: " << a[0] << endl;
	for(int i=1;i<n;i++){
		j=i-1;
		t=a[i];
		while(t<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
		cout << "Buoc " << i << ": ";
		for(int m=0;m<=i;m++){
			cout << a[m] << " ";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	nhap(a,n);
	xuat(a,n);
}