#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	queue<int> a;
	string s;
	cin.ignore();
	while(t--){
		cin >> s;
		if(s=="PUSH"){
			int n;
			cin >> n;
			a.push(n);
		}
		else if(s=="POP"){
			if(!a.empty()) a.pop();
		}
		else{
			if(!a.empty()) cout << a.front() << endl;
			else cout << "NONE" << endl;
		}
	}
}