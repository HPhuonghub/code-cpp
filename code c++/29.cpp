#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,s1;
	getline(cin,s);
	getline(cin,s1);
	int i=s.find(s1);
	while(i<s.size()){
		s.erase(i,s1.size());
		i=s.find(s1);
	}
	cout << s;
}
