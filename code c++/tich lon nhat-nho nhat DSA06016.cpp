#include <bits/stdc++.h>
using namespace std;
void nhap(long a[],long n){
	for(long i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long n,m;
		cin >> n >> m;
		long a[n],b[m];
		nhap(a,n);
		nhap(b,m);
		cout << a[n-1]*b[0] << endl;
	}
}