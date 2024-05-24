#include <bits/stdc++.h>
using namespace std;
int n,a[20][20],b[20],c[20],s=0,res1=1e18,res2=1e18;

void Try(int i){
	for(int j=2;j<=n;j++){
		if(!b[j]){
			b[j]=1;
			c[i]=j;
			s+=a[c[i-1]][j];
			if(i==n){
				if(s+a[j][1]<res1) res1=s+a[j][1];
			}
			else if(s+(n-i+1)*res2<res1) Try(i+1);
			s-=a[c[i-1]][j];
			b[j]=0;
		}
	}
}
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
			if(a[i][j]<res2&&a[i][j]!=0) res2=a[i][j];
		}
	}
	c[1]=1;
	Try(2);
	cout << res1 << endl;
}