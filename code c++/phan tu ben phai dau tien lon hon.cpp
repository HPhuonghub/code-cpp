#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[],int n){
	for(int i=0;i<n;i++) cin >> a[i];
}
void xuly(long long a[],int n){
	stack<long long> st;
	long long b[n],i;
	for(i=n-1;i>=0;i--){
		while(!st.empty() && a[i]>=st.top()) st.pop();
		if(st.empty()) b[i] = -1;
		else b[i] = st.top();
		st.push(a[i]);
	}
	for(i=0;i<n;i++) cout << b[i] << " ";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		nhap(a,n);
		xuly(a,n);
	}
}