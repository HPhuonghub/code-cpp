#include <bits/stdc++.h>
using namespace std;
int a[1001][1001],v,e;
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(a,0,sizeof(a));
		cin >> v >> e;
		for(int i=1;i<=e;i++){
			int n,m;
			cin >> n >> m;
			a[n][m]=1;
		}
		for(int i=1;i<=v;i++){
			cout << i << ": ";
			for(int j=1;j<=v;j++){
				if(a[i][j]==1) cout << j << " ";
			}
			cout << endl;
		}
	}
}