#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int c=min(k,n-k),s1=0,s2=0;
		for(int i=0;i<c;i++) s1 += a[i];
		for(int i=c;i<n;i++) s2 += a[i];
		cout << s2-s1 << endl;
	}
}