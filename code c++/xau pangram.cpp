#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s,s1;
		cin >> s;
		int k,dem=0;
		cin >> k;
		s1 = "abcdefghijklmnopqrstuvwxyz";
		for(int i=0;i<26;i++){
			for(int j=0;j<s.size();j++){
				if(s[j]==s1[i]){
					dem++;
					break;
				}
			}
		}
		int d=26-dem;
		if(d<=k){
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
}
