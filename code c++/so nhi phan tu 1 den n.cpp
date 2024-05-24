#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	queue<string> a;
	a.push("1");
	for(int i=1;i<=n;i++){
		string temp=a.front();
		cout << temp << " ";
		a.pop();
		a.push(temp+'0');
		a.push(temp+'1');
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