#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++){
		int dem=0;
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int b=a[i];
				a[i]=a[j];
				a[j]=b;
				dem++;
			}
		}
		if(dem>0){
			cout << "Buoc " << i+1 << ": ";
			for(int j=0;j<n;j++){
				cout << a[j] << " ";
			}
			cout << endl;
			dem=0;
		}
	}
}