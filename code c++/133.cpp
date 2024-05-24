#include <bits/stdc++.h>
using namespace std;
int n,a[101],b[101];
void in(){
	for(int i=1;i<=n;i++) cout << a[i];
	cout << endl;
//	int m=0,k=0;
//	for(int i=1;i<=n;i++){
//		if(a[i]==0) cout << b[i] << " ko";
//		else cout << b[i] << " mo";
//	}
//	cout << endl;
//	if(m-k==0){
//		for(int i=1;i<=n;i++){
//			if(a[i]==0) cout << b[i] << " ";
//		}
//		for(int i=1;i<=n;i++){
//			if(a[i]==1) cout << b[i] << " ";
//		}
//		cout << endl;
//	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) in();
		else Try(i+1);
	}
}
int main(){
	cin >> n;
	for(int i=1;i<=n;i++) cin >> b[i];
	Try(1);
}