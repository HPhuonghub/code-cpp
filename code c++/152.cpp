#include <bits/stdc++.h>
using namespace std;
int n,m,check[1005];
vector<int> List1[1005];
vector<int> List2[1005];
stack<int> st;
void DFS1(int u){
	check[u]=1;
	for(int v : List1[u]){
		if(check[v]==0){
			DFS1(v);
		}
	}
}
void DFS2(int u){
	check[u]=1;
	for(int v : List2[u]){
		if(check[v]==0){
			DFS2(v);
		}
	}
	st.push(u);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0;i<1005;i++) List1[i].clear();
		for(int i=0;i<1005;i++) List2[i].clear();
		memset(check,0,sizeof(check));
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List1[x].push_back(y);
			List2[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			if(check[i]==0){
				DFS2(i);
			}
		}
		int dem=0;
		memset(check,0,sizeof(check));
		while(!st.empty()){
			int x=st.top();
			if(check[x]){
				DFS1(x);
				dem++;
			}
			st.pop();
		}
		cout << dem << endl;
	}
}