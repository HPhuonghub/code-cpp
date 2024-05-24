#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long n;
	cin >> n;
	queue<long long> q;
	q.push(1);
	int dem=0;
	while(1){
		long long temp=q.front();
		if(temp<=n){
			dem++;
		}
		else{
			break;
		}
		q.pop();
		q.push(temp*10);
		q.push(temp*10+1);
	}
	cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}