#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int a[t];
	for(int i=0;i<t;i++){
		cin >> a[i];
	}
	set<int> b;
	for(int i=0;i<t;i++){
		b.insert(a[i]);
		cout << "Buoc " << i << ":";
		for(auto x : b){
			cout << x << " ";
		}
		cout << endl;
	}
}