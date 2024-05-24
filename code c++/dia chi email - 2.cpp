#include<bits/stdc++.h>
using namespace std;
string res(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
		s[i] += 32;
	}
	stringstream w(s);
	string h[10];
	int i = 0;
	while(w >> h[i]) i++; string m = h[i - 1]; int j = 0;
	while(j < i - 1) { m += h[j][0]; j++; }
	return m;
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	string s[n];
	string w[n];
	for(int i = 0; i < n; i++){
		getline(cin, s[i]);
		w[i] = res(s[i]);
	}
	for(int i = 0; i < n; i++){
		char m = '2';
		for(int j = i + 1; j < n; j++){
			if(w[j] == w[i]){
				w[j] += m; m++;
			}
		}
		cout << w[i] << "@ptit.edu.vn" << endl;
	}
}