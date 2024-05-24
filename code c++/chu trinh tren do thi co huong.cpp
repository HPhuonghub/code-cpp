#include <bits/stdc++.h>
using namespace std;
int n,m,check[1005],k=0;
vector<int> List[1005];
bool DFS(int u){
	check[u]=1;
	for(int v : List[u]){
		if(check[v]==0){
			if(DFS(v)) return true;
		}
		else if(check[v] == 1) return true;
	}
	check[u]=2;
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		int a=0;
		for(int i=1;i<=n;i++){
			if(check[i]==0){
				if(DFS(i)){
					cout << "YES\n";
					a=1;
					break;
				}
			}
		}
		if(a==0) cout << "NO\n";
		memset(check,0,sizeof(check));
	}
}