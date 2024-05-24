#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int b[101][101];
		int dem=0;
		int i,j,check;
		for(i=0;i<n-1;i++){
			check=true;
			for(j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					check=false;
				}
			}
			if(check== true)break;
			for(j=0;j<n;j++){
				b[i][j]=a[j];
			}
			dem=i;
		}
		for(int i= dem;i>=0;i--){
			cout << "Buoc " << i+1 << ": ";
			for(int j=0;j<n;j++){
				cout << b[i][j] <<" ";
			}
			cout << endl;
		}
	}
}
