#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int t=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i==0) continue;
			t+=a[i];
		}
		int kt=0,t1=0;
		for(int i=0;i<n-1;i++){
			if(t1==t){
				cout<<i+1<<endl;
				kt=1;
				break;
			}else{
				t1+=a[i];
				t-=a[i+1];
			}
		}
		if(kt==0) cout<<"-1\n";
	}
}
