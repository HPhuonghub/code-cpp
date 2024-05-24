#include <bits/stdc++.h>
using namespace std;
const long long m = 1e9+7;

void solve(){
	int n,k;
	cin >> n >> k;
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=i-1;j>=max(i-k,0);j--){
			dp[i]=(dp[i]+dp[j])%m;
		}
	}
	cout << dp[n] << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}