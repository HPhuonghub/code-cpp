#include <bits/stdc++.h>
using namespace std;
int a[35], b[35], n, k, OK = 0,h=0;
void in(){
	int dem=0;
	h++;
	for(int i=1;i<=k;i++){
		if(a[i]==b[i])	dem++;
	}
	if(dem==k) cout << h;
}
void sinh(){
	int i=k;
	while(a[i] == n-k+i) i--;
	if(i==0) OK = 1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j] = a[j-1] +1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=k;i++) cin >> b[i];
		for(int i=1;i<=k;i++) a[i]=i;
		while(!OK){
			in();
			sinh();
		}
		OK=0;
		h=0;
		cout << endl;
	}
}