#include <bits/stdc++.h>
using namespace std;
void Solve(){
	int n;
	cin >> n;
	int a[n+10][n+10];
	for(int j=1;j<=n;j++)	cin>> a[1][j];
	int cot = n-1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=cot;j++){
			a[i][j] = a[i-1][j] + a[i-1][j+1];
		}
		cot--;
	}
	cot=n;
	for(int i=1;i<=n;i++){
		cout << '[';
		for(int j=1;j<cot;j++){
			cout << a[i][j] << ' ';
		}
		cout << a[i][cot] << ']';
		cot--;
		cout << endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}