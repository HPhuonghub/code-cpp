#include <bits/stdc++.h>
using namespace std;

void nhap(long long a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(long long a[],int n){
	int m=0;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int h=j+1;h<n;h++){
				if(a[i]*a[i] +a [j]*a[j] == a[h]*a[h]){
					m++;
				}
			}
		}
	}
	if(m>0) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long long a[n];
		nhap(a,n);
		xuat(a,n);
	}
}
