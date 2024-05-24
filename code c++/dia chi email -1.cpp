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
    string ho;
    for(int i=0;i<tu.size()-1;i++){
    	ho+=tu[i][0];
	}
	string email=tu[tu.size()-1]+ho+"@ptit.edu.vn";
	cout << email;
}
