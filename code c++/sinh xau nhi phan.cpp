#include <bits/stdc++.h>
using namespace std;
int a[100],stop;
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
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
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