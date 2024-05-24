#include<bits/stdc++.h>
#define FOR(i,l,r)       for(int i=l;i<r;i++)
#define cin(M,n)         FOR(i,0,n)cin>>M[i]
#define cout(M,n)        FOR(i,0,n)cout<<M[i]<<" "
#define all(M)           M.begin(),M.end()
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	vector<string> M(n); cin(M, n);
	sort(all(M));
	M.erase(unique(all(M)), M.end());
	n = M.size();
	string s = string(k, '0') + string(n - k, '1');
	do {
		FOR(i, 0, n)if (s[i] == '0')cout << M[i] << " ";
		cout << endl;
	} while (next_permutation(all(s)));

}