#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int m[n];
	for(int i=0;i<n;i++) cin >> m[i];
	sort(m,m+n);
	int a = m[n - 1] * m[n - 2];
	int b = m[0] * m[1];
	int c = a * m[n-3];
	int d = m[n-1] * b;
	cout << max(a, max(b, max(c, d))) << endl;
}