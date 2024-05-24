#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		long long a[n],b[m],c[k];
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<m;i++)	cin >> b[i];
		for(int i=0;i<k;i++)	cin >> c[i];
		map<long long, long long> mp;
		for(int i=0;i<n;i++){
			mp[a[i]]++;
		}
		for(int i=0;i<m;i++){
			mp[b[i]]++;
		}
		for(int i=0;i<k;i++){
			mp[c[i]]++;
		}
		int h=0;
		for(auto it : mp){
			if(it.second>1){
				cout << it.first << " ";
				h++;
			}
		}
		if(h==0) cout << -1;
		cout << endl;
	}
}