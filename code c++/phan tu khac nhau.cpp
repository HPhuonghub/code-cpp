#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,dem=n;
		cin >> n;
		long long a[n],b[n];
		for(int i=1;i<=n;i++) cin >> a[i];
		for(int i=1;i<n;i++) cin >> b[i];
		for(int i=1;i<n;i++){
			if(a[i]!=b[i]){
				dem=i;
				break;
			}
		}
		cout << dem << endl;
	}
}