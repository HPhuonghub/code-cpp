#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector<long long> A(n);
	for(int i=0;i<n;i++) cin >> A[i];
	set<int> ans;
	for(int i=0;i<n;i++){
		long long number = A[i];
		while(number > 0){
			ans.insert(number % 10);
			number /= 10;
		}
	}
	for(auto x: ans ) cout << x << " ";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}