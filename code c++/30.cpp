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
		for(int i=tu.size()-1;i>=0;i--){
			cout << tu[i] << " ";
		}
		cout << endl;
	}
}
