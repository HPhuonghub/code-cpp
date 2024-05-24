#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		stack<char> s;
		vector<int> v;
		int h=0,m=0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='('){
				m++;
				h++;
				s.push(m);
				v.push_back(h);
			}
			else if(!s.empty() && str[i]==')'){
				v.push_back(s.top());
				s.pop();
			}
		}
		for(int i=0;i<v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}