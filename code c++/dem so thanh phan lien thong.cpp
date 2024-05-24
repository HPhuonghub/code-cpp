#include <bits/stdc++.h>
using namespace std;
int n,m,u,chuaxet[1005];
vector<int> List[1005];
void DFS(int u){
	chuaxet[u]=1;
	for(int v: List[u]){
		if(chuaxet[v]) DFS(v);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int res=0;
		memset(chuaxet,0,sizeof(chuaxet));
		for(int i=0;i<1005;i++) List[i].clear();
		cin >> n >> m >> u;
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			if(chuaxet[i]){
				DFS(i);
				res++;
			}
		}
		cout << res << endl;
	}
}