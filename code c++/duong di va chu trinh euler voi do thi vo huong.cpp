#include <bits/stdc++.h>
using namespace std;
vector<int> List[1005];
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int dem=0;
		for(int i=1;i<=n;i++){
			if(List[i].size()%2!=0) dem++;
		}
		if(dem==2) cout << "1\n";
		else if(dem==0) cout << "2\n";
		else cout << "0\n";
	}
}