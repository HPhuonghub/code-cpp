#include <bits/stdc++.h>
using namespace std;
int n,m,check[1005];
vector<int> List[1005];
void BFS(int u){
	queue<int> q;
	q.push(u);
	check[u] = 1;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int v=0;v<List[x].size();v++){
			int U=List[x][v];
			if(check[U]==0){
				q.push(U);
				check[U] = 1;
			}
		}
	}
}
int main(){
	int t,i;
	cin >> t;
	while(t--){
		int res=0;
		memset(check,0,sizeof(check));
		for(i=0;i<1005;i++) List[i].clear();
		cin >> n >> m;
		for(i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(i=1;i<=n;i++){
			if(check[i]==0){
				BFS(i);
				res++;
			}
		}
		cout << res << endl;
	}
}