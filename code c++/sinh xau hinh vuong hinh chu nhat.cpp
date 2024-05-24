#include <bits/stdc++.h>
using namespace std;
int a[100],stop,k;
void ktao(int n,int m){
	for(int i=1;i<=n+m;i++){
		a[i]=0;
	}
}
void sinh(int n,int m){
	int i=n+m;
	while(i >= 1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i == 0){
		stop=0;
	}
	else{
		a[i]=1;
	}
}
int check(int n,int m){
	int dem=0,dem1=0;
	for(int i=1;i<=n+m;i++){
		if(a[i]==1){
			dem++;
		}
		if(a[i]==0){
			dem1++;
		}
	}
	if(dem==n&&dem1==m){
		return 1;
	}
	else return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		stop=1;
		while(stop){
			if(check(n,m)){
				for(int i=1;i<=n+m;i++){
					cout << a[i];
				}
				cout << endl;
			}
			sinh(n,m);
		}
	}
	return 0;
}