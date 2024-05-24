#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		map<int,int> b;
		for(int i=0;i<n;i++){
		    cin >> a[i];
			b[a[i]]++;
		}
		vector<pair<int,int>> v;
		for(auto p: b) v.push_back(p);
		int dem=0;
		for(auto x: v){
			if(x.second>n/2){
				cout << x.first << endl;
				dem++;
			}
		}
		if(dem==0){
			cout << "NO" << endl;
		}
	}
}
