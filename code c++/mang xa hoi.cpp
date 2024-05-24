#include<bits/stdc++.h>
using namespace std;
int parent[1005],num[1005];
int find(int x){
	while (x!= parent[x]){
		x=parent[x];
	}
	return x;
}
void Union(int x,int y){
	int u=find(x);
	int v=find(y);
	if (num[u] <= num[v]){
		parent[u]=v; 
		num[v]=num[v]+num[u];
	}
	else{
		parent[v]=u;
		num[u]=num[u]+num[v];
	}
}
int main(){
	int t;
	cin>>t;
	while (t--){
		int n,m;
		cin>>n>>m;
		for (int i=1;i<=n;i++){
			parent[i]=i;
			num[i]=1;
		}
		for (int i=0;i<m;i++){
			int u,v;
			cin>>u>>v;
			if (find(u) != find(v)){
				Union(u,v);
			}
		}
		
		sort(num,num+n+1);
		
		if (num[n] == n) cout<<"YES\n";
		else cout<<"NO\n";		
	}
	
}