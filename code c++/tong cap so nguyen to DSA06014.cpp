#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 2
;
bool prime[N] = {};
void erathos(){
	for(int i=2;i<N;i++) prime[i] = true;
	for(int i=2;i<=(int) sqrt(N);i++){
		if(prime[i] == true){
			for(int j=i*i;j<N;j+=i) prime[j] = false;
		}
	}
}
void solve(){
	int n;
	cin >> n;
	bool found = false;
	for(int i=2;i<n;i++){
		if(prime[i] == true && prime[n-i] == true){
			found = true;
			cout << i << " " << n-i << endl;
			break;
		}
	}
	if(!found){
		cout << -1 << endl;
	}
}
int main(){
	erathos();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}