#include <bits/stdc++.h>
using namespace std;
int check[1005];
vector<int> List[1005];
void BFS(int u){
	queue<int> q;
	q.push(u);
	check[u]=1;
	cout << u << " ";
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int v : List[x]){
			if(check[v]==0){
				cout << v << " ";
				q.push(v);
				check[v]=1;
			}
		}
	}
	cout << endl;
}
int main(){
	int t,n,m,k;
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		memset(check,0,sizeof(check));
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		BFS(k);
	}
}