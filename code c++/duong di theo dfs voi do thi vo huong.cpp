#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,c[1005];
bool chuaxet[1005];
vector<int> List[1005];
void DFS(int u){
	chuaxet[u]=false;
	for(int v=0;v<List[u].size();v++){
		int U=List[u][v];
		if(chuaxet[U]==true){
			c[U]=u;
			DFS(U);
		}
	}
}
int main(){
	int t,i;
	cin >> t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(i=0;i<1005;i++) List[i].clear();
		cin >> n >> m >> a >> b;
		for(i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(a);
		if(chuaxet[b]==true) cout << "-1" << endl;
		else{
			vector<int> res;
			int j=b;
			cout << a << " ";
			while(j!=a){
				res.push_back(j);
				j=c[j];
			}
			for(int j=res.size()-1;j>=0;j--) cout << res[j]<<" ";
			cout << endl;
		}
	}
}