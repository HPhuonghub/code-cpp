#include <bits/stdc++.h>
using namespace std;

int n,X;
bool cmp(pair<int, int> p1, pair<int, int> p2){
	if(abs(X - p1.first) == abs(X - p2.first)){
		return p1.second < p2.second;
	}
	return abs(X - p1.first) < abs(X - p2.first);
}
void solve(){
	cin >> n >> X;
	vector<int> A(n);
	vector<pair<int, int>> v;
	for(int i=0;i<n;i++){
		cin >> A[i];
		v.push_back({A[i], i});
	}
	sort(v.begin(), v.end(), cmp);
	for(auto p: v) cout << p.first << " ";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}