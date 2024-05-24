#include <bits/stdc++.h>
using namespace std;
vector<int> List1[1005];
vector<int> List2[1005];
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0;i<1005;i++) List1[i].clear();
		for(int i=0;i<1005;i++) List2[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List1[x].push_back(y);
			List2[y].push_back(x);
		}
		int dem=0;
		for(int i=1;i<=n;i++){
			if(List1[i].size() != List2[i].size()) dem++;
		}
		if(dem!=0) cout << "0\n";
		else cout << "1\n";
	}
}