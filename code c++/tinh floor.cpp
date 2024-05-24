#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	int a[n+1],res=-1;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i]<=k) res=i;
	}
	if(res==-1) cout << -1 << endl;
	else cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}