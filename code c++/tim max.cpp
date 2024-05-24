#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		long long Max=0;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			Max += a[i]*i;
			Max %= mod;
		}
		cout << Max << '\n';
	}
}