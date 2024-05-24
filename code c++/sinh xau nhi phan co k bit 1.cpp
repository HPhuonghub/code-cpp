#include <bits/stdc++.h>
using namespace std;
int a[100],stop,k;
void ktao(int &n){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(int n){
	int i=n;
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
bool check(int n,int k){
	int dem=0;
	for(int i=1;i<=n;i++){
		dem += a[i];
	}
	return dem == k;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n >> k;
		stop=1;
		while(stop){
			if(check(n,k)){
				for(int i=1;i<=n;i++){
					cout << a[i];
				}
				cout << endl;
			}
			sinh(n);
		}
	}
	return 0;
}