#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
}
void xuat(int a[][100],int n,int m){
	int t=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==-1){
				if(a[i][j+1]>=0){
					t++;
				}
				if(a[i][j-1]>=0){
					t++;
				}
				for(int h=j-1;h<=j+1;h++){
					if(a[i-1][h]>=0){
						t++;
					}
				}
				for(int h=j-1;h<=j+1;h++){
					if(a[i+1][h]>=0){
						t++;
					}
				}
			}
		}
	}
	cout << t;
}
int main(){
	int n,m;
	cin >> n >> m;
	int a[100][100];
	nhap(a,n,m);
	xuat(a,n,m);
	
}
