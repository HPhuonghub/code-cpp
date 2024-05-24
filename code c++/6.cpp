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
		vector<string> tu;
		while(a>>word){
			tu.push_back(word);
		}
		int chan=0,le=0;
		string r;
		for(int i=0;i<s.size();i++){
			cout << tu[i] << " ";
		}
		cout << endl;
	}
}
