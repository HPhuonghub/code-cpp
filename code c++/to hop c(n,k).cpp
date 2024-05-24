#include <bits/stdc++.h>
using namespace std;
int m=1e9+7;
int a[1005],n,k,b[1005][1005];
void solve(){
	for(int i=0;i<1005;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i) b[i][j]=1;
			else b[i][j]=(b[i-1][j-1]+b[i-1][j])%m;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		solve();
		cout << b[n][k] << endl;
	}
}