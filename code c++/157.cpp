#include <bits/stdc++.h>
using namespace std;
int n,m,k,check[1005];
vector<int> List[1005];
void DFS(int u){
	cout << u << " ";
	check[u]=1;
	for(auto v : List[u]){
		if(check[v]==0) DFS(v);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		memset(check,0,sizeof(check));
		for(int i=1;i<=1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(k);
		cout << endl;
	}
}