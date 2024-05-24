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
		int dem=0,min=a[i],m;
		for(int j=i+1;j<n;j++){
			if(min>a[j]){
				min=a[j];
				m=j;
			}
	    }
		int b=a[i];
		a[i]=a[m];
		a[m]=b;
		dem++;
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