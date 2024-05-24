#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		long long m;
		cin >> s >> m;
		long long a=s.size();
		long long b=0;
		for(long long i=0;i<a;i++){
			b = ( b * 10 + ( s[i] - '0' ) ) % m;
		}
		cout << b << endl;
	}
}