#include<bits/stdc++.h>
using namespace std;
int run(){
	int n;
	cin >> n;
	int a[n];
	
	int dem=0;
	for(int i = 0; i< n ; i++){
		cin >> a[i];
	}
	if(n<=2) return 0;
	for(int i = 0; i < n-2; i++){
		for(int j = i+1; j< n-1;j++){
			for(int k = j+1;k<n;k++){
				if(a[i]+a[j]+a[k]==0) dem++;
			}
		}
	}
	
	return dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cout << run();
		cout << endl;
	}
	return 0;
}