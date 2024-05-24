#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int m=0,n=0;
		for(int i=0;i<s.size();i++){
			if(i%2==0){
				m=m+s[i]-'0';
		    }
			else{
			    n=n+s[i]-'0';
		    }
	    }
	    if((m-n)%11==0){
		    cout << "1" << endl;
	    }
	    else{
		    cout << "0" << endl;
	    }
    }
}
