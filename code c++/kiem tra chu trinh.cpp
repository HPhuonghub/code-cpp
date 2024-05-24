#include <bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[1005],ok=false;
vector<int> List[1005];
void DFS(int u,int k){
	chuaxet[u]=false;
	for(int v=0;v<List[u].size();v++){
		int x=List[u][v];
		if(chuaxet[x]){
			DFS(x,u);
		}
		else if(!chuaxet[x] && x!=k){
			ok=true;
		}
	}
}
int main(){
	int t,i;
	cin >> t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(i=0;i<1005;i++) List[i].clear();
		cin >> n >> m;
		ok=false;
		for(i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(i=1;i<=n;i++){
			if(chuaxet[i]) DFS(i,0);
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}