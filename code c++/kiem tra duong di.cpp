#include <bits/stdc++.h>
using namespace std;
int n,m,u,U;
bool chuaxet[1005];
vector<int> List[1005];
void DFS(int u){
	chuaxet[u]=false;
	for(int v: List[u]){
		U=List[u][v];
		if(chuaxet[v]) DFS(v);
	}
}
int main(){
	int t,i;
	cin >> t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(i=0;i<1005;i++) List[i].clear();
		cin >> n >> m;
		for(i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int q;
		cin >> q;
		for(i=1;i<=q;i++){
			int x,y;
			cin >> x >> y;
			memset(chuaxet,true,sizeof(chuaxet));
			DFS(x);
			if(chuaxet[y]==true ) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
}