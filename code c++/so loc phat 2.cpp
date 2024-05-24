#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	queue<string> q;
	q.push("6");
	q.push("8");
	vector<string> res;
	int dem=0;
	while(1){
		dem++;
		string temp=q.front();
		res.push_back(temp);
		q.pop();
		if(temp.size()<=n-1){
			q.push(temp+"6");
			q.push(temp+"8");
		}
		else break;
	}
	while(q.size()){
		dem++;
		res.push_back(q.front());
		q.pop();
	}
	cout << dem << endl;
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