#include<bits/stdc++.h>
using namespace std;
int n,a[105],sum,ok;
void Try(int i,int s){
	if(s==sum/2){
		ok=1;
		return ;
	}
	if(ok==1) return;
	for(int j=i;j<=n;j++){
		if(s+a[j]<=sum/2) Try(i+1,s+a[j]);
	}
}
void solve(){
	cin >> n;
	sum=0,ok=0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum%2==1){
		cout << "NO" << endl;
		return ;
	}
	Try(1,0);
	if(ok==0) cout << "NO" << endl;
	else cout << "YES" << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}