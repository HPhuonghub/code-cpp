#include <bits/stdc++.h>
using namespace std;
int n,m,st,en,a[1005];
bool check[1005];
vector<int> List[1005];
bool DFS(int u){
	check[u]=true;
	for(int v : List[u]){
		if(!check[v]){
			a[v] = u;
			if(DFS(v)) return true;
		}
		else if(v != a[v]){
			st=v; en=u;
			return true;
		}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int h=0;
		memset(check,false,sizeof(check));
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			if(!check[i]){
				if(DFS(i)){
					vector<int> q;
					q.push_back(st);
					while(en != st){
						q.push_back(en);
						en = a[en];
					}
					q.push_back(st);
					for(int v : q){
						cout << v << " ";
					}
					return 0;
				}
			}
		}
		cout << "NO\n";
//		if(h>0){
//			cout << "YES\n";
//			vector<int> q;
//			q.push_back(st);
//			while(en != st){
//				q.push_back(en);
//				en = a[en];
//			}
//			q.push_back(st);
//			for(auto v : q){
//				cout << v << " ";
//			}
//		}
//		else cout << "NO\n";
	}
}