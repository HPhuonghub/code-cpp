#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	stringstream a(s);
	string word;
	vector<string> tu;
	while(a>>word){
		transform(word.begin(),word.end(),word.begin(),::tolower);
		tu.push_back(word);
	}
	for(int i=0;i<tu.size()-1;i++){
		char t=tu[i][0]-32;
		cout << t;
		tu[i].erase(tu[i].begin() + 0);
		cout << tu[i];
		if(i<tu.size()-2){
			cout << " ";
		}
	}
	cout << ", ";
	string m=tu[tu.size()-1];
	transform(m.begin(),m.end(),m.begin(),::toupper);
	cout << m;
}
