#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		set<int>s;
		set<int>ms;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		sort(a+1,a+n);
		for(int i=1;i<=m;i++){
			cin >> b[i];
		}
		for(int i=1;i<=n;i++){
			s.insert(a[i]);
		}
		sort(b+1,b+m);
		int k=0;
		for(int i=1;i<=m;i++){
			s.insert(b[i]);
			if(n+i-s.size()!=k){
				ms.insert(b[i]);
				k++;
			}
		}
		for(int x:s) cout << x << " ";
			cout << endl;
		for(int y:ms) cout << y <<" ";
			cout << endl;
	}
}