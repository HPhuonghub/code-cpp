#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int dem=1,n=s.size();
		for(int i=0;i<n;i++){
			if(s[i]==s[i+1]){
				dem++;
			}
			else{
				cout << s[i] << dem;
				dem=1;
			}
		}
		cout << endl;
	}
}
