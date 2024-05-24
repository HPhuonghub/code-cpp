#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],dem=0;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			if(a[i]==0) dem++;
		}
		cout << dem << endl;
	}
}