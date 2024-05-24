#include<bits/stdc++.h>
using namespace std;

void in(){
	int n,k;
	cin>>n>>k;
	int a[k],i=k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	while(a[i]==n-k+i&&i>0) i--;
	if(i==0){
		for(int i=1;i<=k;i++) a[i]=i;
		
	}
	else{
		a[i]--;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
		
	}
	for(int j=1;j<=k;j++) cout<<a[j]<<' ';
	cout<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		in();
	}
}