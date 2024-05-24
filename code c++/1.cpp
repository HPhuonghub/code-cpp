#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int k,int x){
	a[k] = x;
	for(int i=0;i<=k-1;i++){
		cout << a[i] << " ";
	}
	for(int i=k-;i<n;i++){
	    cout << a[i] << " ";
	} 
}
int main(){
	int n,a[100],k,x;
	cin >> n >> k >> x;
	nhap(a,n);
	xuat(a,n,k,x);
}
