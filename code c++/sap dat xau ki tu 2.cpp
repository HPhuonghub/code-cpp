#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	int a[26];
	memset(a,0,sizeof(a));
	for(int i=0;i<s.size();i++) a[s[i]-'A']++;
	sort(a,a+26,greater<int>());
	if((a[0]-1)*n+1<=s.size()) cout << 1 << endl;
	else cout << -1 << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}