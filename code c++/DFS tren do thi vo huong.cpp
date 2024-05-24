#include <bits/stdc++.h>
using namespace std;
int n,m,chuaxet[1005];
vector<int> List[1005];
void DFS(int u){
	chuaxet[u]=1;
	for(int v=0;v<List[u].size();v++){
		int U=List[u][v];
		if(chuaxet[U]==0){
			DFS(U);
		}
	}
}
int main(){
	int t,i;
	cin >> t;
	while(t--){
		int res=0;
		memset(chuaxet,0,sizeof(chuaxet));
		for(i=0;i<1005;i++) List[i].clear();
		cin >> n >> m;
		for(i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(i=1;i<=n;i++){
			if(chuaxet[i]==0){
				DFS(i);
				res++;
			}
		}
		cout << res << endl;
	}
}