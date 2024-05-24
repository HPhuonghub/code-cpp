#include <bits/stdc++.h>
using namespace std;
int a[100],stop,k;
void ktao(int n,int k){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(int n,int k){
	int i=k;
	while(i >= 1 && a[i] == n-k+i){
		--i;
	}
	if(i==0){
		stop=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;++j){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		stop=1;
		while(stop){
			for(int i=1;i<=k;i++){
				cout << a[i];
			}
			cout << endl;
			sinh(n,k);
		}
	}
	return 0;
}