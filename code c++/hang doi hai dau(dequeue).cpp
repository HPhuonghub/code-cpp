#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	deque<int> a;
	while(t--){
		string s;
		cin >> s;
		if(s=="PUSHBACK"){
			int n;
			cin >> n;
			a.push_back(n);
		}
		else if(s=="PUSHFRONT"){
			int n;
			cin >> n;
			a.push_front(n);
		}
		else if(s=="PRINTFRONT") (a.size()>0)? cout << a.front() << '\n' : cout << "NONE\n";
		else if(s=="PRINTBACK") (a.size()>0)? cout << a.back() << '\n' : cout << "NONE\n";
		else if(s=="POPFRONT" && a.size()>0) a.pop_front();
		else if(s=="POPBACK" && a.size()>0) a.pop_back();
	}
}