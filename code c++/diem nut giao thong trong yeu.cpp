#include <bits/stdc++.h>
using namespace std;
int n,m,check[1005];
vector<int> List[1005];
void DFS(int u){
	check[u]=1;
	for(int v : List[u]){
		if(check[v]==0){
			DFS(v);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		queue<int> c;
		int a=0,b=0,dem=0;
		cin >> n >> m;
		for(int i=0;i<1005;i++) List[i].clear();
		memset(check,0,sizeof(check));
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			if(check[i]==0){
				DFS(i);
				a++;
			}
		}
		for(int i=1;i<=n;i++){
			memset(check,0,sizeof(check));
			check[i]=1;
			b=0;
			for(int j=1;j<=n;j++){
				if(check[j]==0){
					DFS(j);
					b++;
				}
			}
			if(b>a){
				dem++;
				c.push(i);
			}
		}
		cout << dem << endl;
		while(!c.empty()){
			cout << c.front() << " ";
			c.pop();
		}
		cout << endl;
	}
}