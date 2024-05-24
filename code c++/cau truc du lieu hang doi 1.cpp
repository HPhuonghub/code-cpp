#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int val=0;
		queue<int> a;
		while(n--){
			int k;
			cin >> k;
			if(k==1){
				cout << a.size() << endl;
			}
			else if(k==2){
				(a.size() > 0)? cout << "NO\n" : cout << "YES\n";
			}
			else if(k==3){
				int m; cin >> m;
				a.push(m);
			}
			else if(k==4 && a.size()>0) a.pop();
			else if(k==5){
				(a.size()>0)? cout << a.front() << '\n' : cout << -1 << '\n';
			}
			else if(k==6){
				(a.size()>0)? cout << a.back() << '\n' : cout << -1 << '\n';
			}
			val=k;
		}
		if(val==3||val==4) cout << '\n';
	}
}