#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[100000]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		int max=a[0];
		for(int i=0;i<n;i++){
			if(b[max]<b[a[i]]){
				max=a[i];
			}
		}
		if(b[max]>n/2){
			cout<<max<<endl;
		}else cout<<"NO\n";
	}
}
