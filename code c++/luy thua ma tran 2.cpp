#include<iostream>
using namespace std;
#define mod 1000000007

long long F[100][100];
void mul(long long A[100][100], long long B[100][100], int n) {
	long long N[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			N[i][j] = 0;
			for (int l = 0; l < n; l++) {
				N[i][j] += A[i][l] * B[l][j] % mod;
			}
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			A[i][j] = N[i][j] % mod;
}
void Pow(long long M[100][100], int n, int k) {
	if (k == 1)return;
	Pow(M, n, k / 2);
	mul(M, M, n);
	if (k % 2 == 1)
		mul(M, F, n);
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		long long M[100][100];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				cin >> M[i][j]; F[i][j] = M[i][j];
			}
		Pow(M, n, k);
		long long res = 0;
		for (int i = 0; i < n; i++) {
			res += M[i][n - 1];
			res %= mod;
		}
		cout << res << endl;
	}
}