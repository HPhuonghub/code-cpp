#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int dem;
		for(int i=0;i<n;i++){
			if(m==a[i]){
				dem = i+1;
			}
		}
		cout << dem << endl;
	}
}