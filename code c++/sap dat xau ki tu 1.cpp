#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int a[26],sum=0;
	memset(a,0,sizeof(a));
	for(int i=0;i<s.size();i++) a[s[i]-'a']++;
	sort(a,a+26,greater<int>());
	for(int i=1;i<26;i++) sum+=a[i];
	if(sum+1>=a[0]) cout << 1 << endl;
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