#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int n=s.size();
		int m=0;
		for(int i=0;i<=n/2;i++){
			if(s[i]!=s[s.size()-1-i]){
				m++;
			}
			if(s[i]%2!=0&&s[s.size()-1-i]%2!=0) m++;
		}
		if(m==0){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
