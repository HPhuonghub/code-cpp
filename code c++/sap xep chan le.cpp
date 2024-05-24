#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	sort(a,a+n);
	if(n%2==0){
		for(int i=0;i<n/2;i++){
			cout << a[i] << " " << a[n/2+i] << " ";
		}
	}
	else {
		for(int i=0;i<(n+1)/2;i++){
			if(i==(n-1)/2){
				cout << a[i];
			}
			else{
				cout << a[i] << " " << a[(n+1)/2+i] << " ";
		    }
		}
	}
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