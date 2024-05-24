#include <bits/stdc++.h>
using namespace std;

void solve(){
	int k;
	cin >> k;
	string s;
	cin >>s;
	for(int i=0;i<k&&i<s.size();i++){
		int max=i,j=s.size();
		while(j-->i){
			if(s[j]>s[max]) max=j;
		}
		if(max!=i) swap(s[max],s[i]);
		else k++;
	}
	cout << s << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}