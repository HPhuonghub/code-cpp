#include<bits/stdc++.h>
using namespace std;
string xuli(string s){
	string m;
	for(int i=0;i<s.size();i++){
		m=m+s[s.size()-1-i];
	}
	return m;
}
void solve(){
	int n;
	cin >> n;
	queue<string> q;
	q.push("4");
	q.push("5");
	vector<string> res;
	while(q.size()-1<=n){
		string temp=q.front();
		res.push_back(temp);
		q.pop();
		q.push(temp+'4');
		q.push(temp+'5');
	}
	for(int i=0;i<res.size();i++){
		cout << res[i] << xuli(res[i]) << " ";
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