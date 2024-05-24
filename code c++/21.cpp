#include<bits/stdc++.h>
using namespace std;

void nhap(long long a[],long long n){
	for(long long i=0;i<n;i++){
		cin >> a[i];
	}
}
int main(){
	int t;
	long long a[100000],b[100000],n,m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		nhap(a,n);
		nhap(b,m);
		sort(a,a+n);
		sort(b,b+m);
		long long h=a[n-1]*b[0];
		cout << h << endl;
	}
}
