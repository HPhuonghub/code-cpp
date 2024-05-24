#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[100][100];
		nhap(a,n,m);
		int hang=0,cot1=m-1,hang1=n-1,cot=0;
		while((cot<=cot1)&&(hang<=hang1)){
		for(int j=hang;j<=cot1;j++){
			cout << a[hang][j] << " ";
		}
		for(int i=cot+1;i<=hang1;i++){
			cout << a[i][cot1] << " ";
		}
		for(int j=cot1-1;j>=hang;j--){
			cout << a[hang1][j] << " ";
		}
		for(int i=hang1-1;i>cot;i--){
			cout << a[i][cot] << " ";
		}
		++hang; --cot1; --hang1; ++cot;
	}
	}
}
