#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int dem=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='2' && s[0]!='0') dem++;
	}
	if(dem>s.size()/2) return 1;
	else return 0;
}
void solve(){
	int n;
	cin >> n;
	queue<string> q;
	q.push("0");
	q.push("1");
	q.push("2");
	vector<string> res;
	int dem=0;
	while(dem+1<=n){
		string temp=q.front();
		if(check(temp)==1){
			res.push_back(temp);
			dem++;
		}
		q.pop();
		q.push(temp+'0');
		q.push(temp+'1');
		q.push(temp+'2');
	}
	for(int i=0;i<res.size();i++){
		cout << res[i] << " ";
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