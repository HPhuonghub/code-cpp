#include <bits/stdc++.h>
using namespace std;
int check[1005];
vector<int> List[1005];
bool DFS(int u,int k){
	check[u]=1;
	for(int v : List[u]){
		if(check[v]==0){
			if(DFS(v,k)) return true;
		}
		else if(v != k){
			return true;
		}
	}
	return false;
}
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		memset(check,0,sizeof(check));
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int dem=0;
		for(int i=1;i<=n;i++){
			if(check[i]==0){
				if(DFS(i,0)){
					dem=1;
					break;
				}
			}
		}
		if(dem==1) cout << "YES\n";
		else cout << "NO\n";
	}
}