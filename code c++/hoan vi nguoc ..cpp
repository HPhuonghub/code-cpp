#include <bits/stdc++.h>
using namespace std;
int n,a[35],b[35],dem=0;
void in(){
	if(dem==0){
		dem++;
		for(int i=1;i<=n;i++) cout << a[i];
		cout << " ";
	}
	else{
		for(int i=1;i<=n;i++) cout << a[i];
		cout << " ";
	}
}
void Try(int i){
	for(int j=n;j>=1;j--){
		if(b[j]==0){
			b[j]=1;
			a[i]=j;
			if(i==n) in();
			else Try(i+1);
			b[j]=0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		dem=0;
		cout << endl;
	}
}