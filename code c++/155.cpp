#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> List[1005];
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=1;i<=1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		for(int i=0;i<n;i++){
			cout << i+1 << ": ";
			for(int v=0;v<List[i+1].size();v++){
				cout << List[i+1][v] << " ";
			}
			cout << endl;
		}
	}
}