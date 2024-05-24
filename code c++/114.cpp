#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=1;i<=n;i++){
		int s;
	    cin >> s;
		a.push_back(s);
	}
	int k;
	cin >> k;
	for(int i=0;i<a.size();i++){
		if(a[i]!=k) cout << a[i] << " ";
	}
}
