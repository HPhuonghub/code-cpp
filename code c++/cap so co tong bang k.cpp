#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		long long M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		long long res = 0;
		for (int i = 0; i < n-1; i++)
			res += (upper_bound(M + i+1, M + n, k - M[i]) - M) - (lower_bound(M + i+1, M + n, k - M[i]) - M);
		cout << res << endl;
	}
}