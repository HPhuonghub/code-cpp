#include <bits/stdc++.h>
using namespace std;
int check[1005],a[1005];
vector<int> List[1005];
void DFS(int u){
	check[u]=1;
	for(int v=0;v<List[u].size();v++){
		int U=List[u][v];
		if(check[U]==0){
			a[U]=u;
			DFS(U);
		}
	}
}
int main(){
	int t,n,m,h,k;
	cin >> t;
	while(t--){
		cin >> n >> m >> h >> k;
		memset(a,0,sizeof(a));
		memset(check,0,sizeof(check));
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(h);
		if(check[k]==0) cout << -1 << endl;
		else{
			vector<int> res;
			int j=k;
			cout << h << " ";
			while(j!=h){
				res.push_back(j);
				j=a[j];
			}
			for(int i=res.size()-1;i>=0;i--){
				cout << res[i] << " ";
			}
			cout << endl;
		}
	}
}