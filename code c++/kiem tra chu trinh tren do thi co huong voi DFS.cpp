#include <bits/stdc++.h>
using namespace std;
int n,m,chuaxet[1005];
vector<int> List[1005];
bool DFS(int u){
	chuaxet[u]=1;
	for(int v : List[u]){
		if(chuaxet[v]==0){
			if(DFS(v)) return true;
		}
		else if(chuaxet[v]==1){
			return true;
		}
	}
	chuaxet[u]=2;
	return false;
}
int main(){
	int t,i;
	cin >> t;
	while(t--){
		memset(chuaxet,0,sizeof(chuaxet));
		for(i=0;i<1005;i++) List[i].clear();
		cin >> n >> m;
		int dem=0;
		for(i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		for(i=1;i<=n;i++){
			if(chuaxet[i]==0){
				if(DFS(i)){
					dem=1;
				}
			}
		}
		if(dem==1) cout << "YES\n";
		else cout << "NO\n";
	}
}