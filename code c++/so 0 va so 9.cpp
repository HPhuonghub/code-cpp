#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long n;
	cin >> n;
	queue<long long> q;
	q.push(9);
	while(1){
		if(q.front()%n==0){
			cout << q.front() << endl;
			break;
		}
		else{
			q.push(q.front()*10);
			q.push(q.front()*10+9);
			q.pop();
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}