#include <bits/stdc++.h>
using namespace std;
int t,j=1;;
void solve(int m){
	string s;
	cin >> s;
	s =' '+s;
	if(j<=m) cout << "Test " << j++ << ": ";
	stack<int> a;
	for(int i=1;i<=s.size();i++){
		if(s[i]=='D'){
			a.push(i);
		}
		else{
			cout << i;
			while(!a.empty()){
				cout << a.top();
				a.pop();
			}
		}
	}
	cout << endl;
}
int main(){
	cin >> t;
	int m=t;
	while(t--){
		solve(m);
	}
}