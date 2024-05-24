#include <bits/stdc++.h>
using namespace std;
int a[100],stop,n;
void ktao(int n){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void sinh(int n){
	int i=n-1;
	while(i >= 1 && a[i] > a[i+1]){
		--i;
	}
	if(i ==0){
		stop=0;
	}
	else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			++l; --r;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ktao(n);
		stop=1;
		while(stop){
			for(int i=1;i<=n;i++){
				cout << a[i];
			}
			cout << endl;
			sinh(n);
		}
	}
	return 0;
}