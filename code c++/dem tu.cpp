#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin,s);
	    stringstream a(s);
	    string word;
	    int dem=0;
	    vector<string> tu;
	    while(a>>word){
		    dem++;
        }
        cout << dem << endl;
    }
}
