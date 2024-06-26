#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;
int n;
long long k,a[10][10],b[10][10];
void Mul(long long x[10][10],long long y[10][10]){
	long long tmp[10][10];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			long long res = 0;
			for(int k=0;k<n;k++){
				res += (x[i][k]*y[k][j])%mod;
				res %= mod;
			}
			tmp[i][j]=res;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=tmp[i][j];
		}
	}
}
void Pow(long long a[10][10],int h){
	if(h<=1) return;
	Pow(a,h/2);
	Mul(a,a);
	if(h&1) Mul(a,b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
				b[i][j]=a[i][j];
			}
		}
		Pow(a,k);
		long long res=0;
		int i=0;
		int j=n-1;
		while(i<n && j>=0){
			res += a[i][j];
			res%=mod;
			i++;
			j--;
		}
		cout << res << "\n";
	}
}