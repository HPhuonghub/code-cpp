#include <bits/stdc++.h>
using namespace std;
int c,n,a[101],b[101][25001];
int main(){
	cin >> c >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	memset(b,0,sizeof(b));
	for(int i=0;i<=c;i++) b[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++){
			if(a[i]<=j)	b[i][j]=max(b[i-1][j],b[i-1][j-a[i]]+a[i]);
			else b[i][j]=b[i-1][j];
		}
	}
	cout << b[n][c] << endl;
}