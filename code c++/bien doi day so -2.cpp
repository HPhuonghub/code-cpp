#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		if(i<n-1){
			if(i==0){
				cout << a[0]*a[1] << " ";
			}
			else{
				cout << a[i-1]*a[i+1] << " ";
			}
		}
		else{
			cout << a[n-1]*a[n-2];
		}
	}
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
    	cin >> n;
    	int a[n];
    	nhap(a,n);
    	xuat(a,n);
    	cout << endl;
	}
}
