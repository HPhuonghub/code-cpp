#include<bits/stdc++.h>
using namespace std;
int n,m,check[1005];
vector<int> List[1005];
vector<pair<int,int> > canh;
void DFS(int u){
	check[u] = 1;
	for(int v=0;v<List[u].size();u++){
		int i=List[u][v];
		if(check[i]==0) DFS(i);
	}
}
void init(int u){
	memset(check,0,sizeof(check));
	for(int i=1;i<=n;i++) List[i].clear();
	for(int i=0;i<canh.size();i++){
		if(i!=u){
			List[canh[i].first].push_back(canh[i].second);
			List[canh[i].second].push_back(canh[i].first);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		canh.clear();
		memset(check,0,sizeof(check));
		for(int i=1;i<=1005;i++) List[i].clear();
		cin >> n >> m;
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			canh.push_back({x,y} );
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i=0;i<m;i++){
			init(i);
			int res=0;
			memset(check,0,sizeof(check));
			for(int k=1;k<=n;k++){
				if(check[k]==0) res++;	DFS(k);
			}
			if(res>1) cout << canh[i].first << " " << canh[i].second << "";
		}
		cout << endl;
	}
}