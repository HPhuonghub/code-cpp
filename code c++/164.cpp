#include <bits/stdc++.h>
using namespace std;
int n,m,check[1005];
vector<int> List[1005];
vector< pair<int,int> > res;
void DFS(int u){
	check[u]=1;
	for(int v : List[u]){
		if(check[v]==0) DFS(v);
	}
}
int demlt(){
	int a=0;
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			DFS(i);
			a++;
		}
	}
	return a;
}
void xuat(int bo,int soltdau,vector< pair<int,int> > dscanh){
	for(int i=0;i<m;i++){
		int x=dscanh[i].first,y=dscanh[i].second;
		if(i!=bo){
			List[x].push_back(y);
			List[y].push_back(x);
		}
	}
	int soltsau=demlt();
	if(soltdau<soltsau){
		int x=dscanh[bo].first,y=dscanh[bo].second;
		if(x>y) res.push_back({y,x});
		else res.push_back({x,y});
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		vector< pair<int,int> > dscanh;
		memset(check,0,sizeof(check));
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
			dscanh.push_back({x,y});
		}
		int soltdau=demlt();
		for(int i=0;i<m;i++){
			memset(check,0,sizeof(check));
			for(int j=0;j<1005;j++) List[j].clear();
			xuat(i,soltdau,dscanh);
		}
		sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++){
			cout << res[i].first << " " << res[i].second << " ";
		}
		cout << endl;
		res.clear();
	}
}