#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		long long m=0;
		for(long long i=0;i<s.size();i++){
			m=m+s[i]-'0';
		}
		while(m>9){
			int h=0;
		    while(m>0){
			    h=h+m%10;
		  	    m=m/10;
		    }
		    m=h;
		}
		if(m==9){
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
}
