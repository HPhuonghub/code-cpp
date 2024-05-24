#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		stack<string> a;
		while(1){
			cin >> s;
			a.push(s);
			if(getchar()=='\n') break;
		}
		while(a.size()!=0){
			cout << a.top() << " ";
			a.pop();
		}
		cout << endl;
	}
}