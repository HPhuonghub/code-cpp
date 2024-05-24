//fixed << setprecision(2)
#include <bits/stdc++.h>
using namespace std;
int t(int a[],int n,int b[]){
	int j=0,dem=n,m=0;
	while(j<n-1){
		if((a[j]+a[j+1])%2==0){
				j=j+2;
			dem=dem-2;
		}
		else{
			b[m]=a[j];
			j++;
		}
	}
	
}
int main(){
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << t(a,n,b); 
}