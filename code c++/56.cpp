#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector<int> b;
		nhap(a,n);
		for(int i=a[0];i<=a[n-1];i++){
			b.push_back(i);
		}
		for(int i=0;i<b.size();i++){
			cout << b[i] << " ";
		}
	}
}