#include <bits/stdc++.h>
using namespace std;
int V,E,s,k,b[1005],check[1005];
vector<int> List[1005];
void BFS(int u){
	queue<int> q;
	q.push(u);
	check[u] = 0;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int v : List[x]){
			if(check[v]){
				q.push(v);
				check[v] = 0;
				b[v] = x;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i=0;i<1005;i++) List[i].clear();
		memset(check,1,sizeof(check));
		memset(b,1,sizeof(b));
		cin >> V >> E >> s >> k;
		for(int i=0;i<E;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		BFS(s);
		if(check[k]) cout << "-1" << endl;
		else{
			vector<int> res;
			int i=k;
			cout << s << " ";
			while(i!=s){
				res.push_back(i);
				i=b[i];
			}
			for(int i=res.size()-1;i>=0;i--) cout << res[i]<<" ";
			cout << endl;
		}
	}
}