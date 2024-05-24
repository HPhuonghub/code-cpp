#include <bits/stdc++.h>
using namespace std;
#define xli pair<int,int>
bool cmp(xli p1,xli p2){
	if(p1.second == p2.second){
		return p1.first < p2.first;
	}
	return p1.second > p2.second;
}
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	map<int,int> count;
	for(int i=0;i<n;i++){
		cin >> a[i];
		count[a[i]]++;
	}
	vector<pair<int,int>> v;
	for(auto p: count){
		v.push_back(p);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto p: v){
		while(p.second--){
			cout << p.first << " ";
		}
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}