#include <bits/stdc++.h>
using namespace std;
int n,v,a[1005],b[1005][1005],c[1005];
void solve(){
	cin >> n >> v;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++) cin >> c[i];
	for(int i=0;i<=v;i++) b[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=v;j++){
			if(a[i]<=j) b[i][j]=max(b[i-1][j],b[i-1][j-a[i]]+c[i]);
			else b[i][j]=b[i-1][j];
		}
	}
	cout << b[n][v] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}