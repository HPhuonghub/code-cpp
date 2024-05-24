#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int b[101][101];
		for(int i=0;i<n;i++){
			int key = a[i];
			int k = i-1;
			while(k>=0 && key<a[k]){
				a[k+1] = a[k];
				k--;
			}
			k++;
			a[k]= key;
			for(int j=0;j<=i;j++){
				b[i][j]=a[j];
			}
		}
		for(int i= n-1;i>=0;i--){
			cout << "Buoc " << i << ": ";
			for(int j=0;j<=i;j++){
				cout << b[i][j] <<" ";
			}
			cout << endl;
		}
}
