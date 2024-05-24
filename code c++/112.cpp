#include <bits/stdc++.h>
using namespace std;
int n,k,a[100000];
int solve(int a[],int l,int r){
	int mid;
	if(l>r) return 0;
	else{
		mid = (l+r)/2;
		if(k == a[mid]) return mid;
		else{
			if(k<a[mid]) return solve(a,l,mid-1);
			else return solve(a,mid+1,r);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=n;i++) cin >> a[i];
		if(solve(a,1,n)==0){
			cout << "NO" << endl;
		}
		else cout << solve(a,1,n) << endl;
	}
}