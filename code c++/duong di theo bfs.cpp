#include <bits/stdc++.h>
using namespace std;
int n,m,s,check[1005],kiemtra[1005];
vector<int> List[1005];
void BFS(int u){
	queue<int> q;
	q.push(u);
	kiemtra[u]=0;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int v:List[x]){
			if(kiemtra[v]){
				q.push(v);
				kiemtra[v] = 0;
				check[v] = x;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> s;
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		memset(kiemtra,1,sizeof(kiemtra));
		BFS(s);
		for(int i=1;i<=n;i++){
			if(s==i) continue;
			if(kiemtra[i]) cout << "No path" << endl;
			else{
				int a=i;
				stack<int> b;
				b.push(a);
				while(s!=a){
					a=check[a];
					b.push(a);
				}
				while(!b.empty()){
					cout << b.top() << " ";
					b.pop();
				}
				cout << endl;
			}
		}
	}
}