#include <bits/stdc++.h>
using namespace std;
int n,m,chuaxet[100005];
vector<int> List[100005];
void DFS(int u){
	chuaxet[u]=1;
	for(int v=0;v<List[u].size();v++){
		int x=List[u][v];
		if(chuaxet[x]==0){
			DFS(x);
		}
	}
}
int main(){
	int t,i;
	cin >> t;
	while(t--){
		memset(chuaxet,0,sizeof(chuaxet));
		for(i=0;i<100005;i++) List[i].clear();
		cin >> n >> m;
		for(i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		int res=0;
		for(i=1;i<=n;i++){
			DFS(i);
			for(int j=1;j<=n;j++){
				if(chuaxet[j]==0){
					res++;
				}
			}
		}
		if(res>=2) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}