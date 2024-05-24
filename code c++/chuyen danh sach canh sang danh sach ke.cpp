#include <bits/stdc++.h>
using namespace std;
int a[1001][1001],n,m;
void solve(){
	memset(a,0,sizeof(a));
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int x,y;
		cin >> x >> y;
		a[x][y]=a[y][x]=1;
	}
	for(int i=1;i<=n;i++){
		cout << i << ": ";
		for(int j=1;j<=n;j++){
			if(a[i][j]==1) cout << j << " ";
		}
		cout << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}