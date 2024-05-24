#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector<int> A(n), B(n);
	for(int i=0;i<n;i++) cin >> A[i], B[i] = A[i];
	sort(B.begin(), B.end());
	int L;
	for(int i=0;i<n;i++){
		if(A[i]!=B[i]){
			L = i+1;
			break;
		}
	}
	int R;
	for(int i=n-1;i>=0;i--){
		if(A[i]!=B[i]){
			R = i+1;
			break;
		}
	}
	cout << L << " " << R << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}