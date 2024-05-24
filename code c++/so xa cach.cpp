#include <bits/stdc++.h>
using namespace std;
int n, a[15], b[15]={0};
int kiemtra(){
	for(int i=1;i<n;i++){
		int t=abs(a[i]-a[i+1]);
		if(t==1) return 0;
	}
	return 1;
}
void in(){
	for(int i=1;i<=n;i++) cout << a[i];
	cout << endl;
}
void back_track(int i){
	int j;
	for(int j=1;j<=n;j++){
		if(b[j]==0){
			a[i]=j;
			b[j]=1;
			if(i==n){
				if(kiemtra()) in();
			}
			else back_track(i+1);
			b[j]=0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		back_track(1);
		cout << endl;
	}
}