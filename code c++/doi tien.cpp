#include <bits/stdc++.h>
using namespace std;
int n, s, a[35] , kq = 1000;
void quaylui(int i,int sum,int x){
	if(sum > s || x > kq) return;
	if(i==n){
		if(sum==s)	kq = min(kq, x);
		return;
	}
	quaylui(i+1,sum,x);
	quaylui(i+1,sum+a[i],x+1);
}
int main(){
	cin >> n >> s;
	for(int i=0;i<n;i++) cin >> a[i];
	quaylui(0,0,0);
	if(kq=1000) cout << -1;
	else cout << kq;
}