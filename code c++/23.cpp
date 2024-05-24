#include<bits/stdc++.h> 

using namespace std; 
int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		int n,a[100000];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int g,h;
		int x=abs(a[0]+a[1]);
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(abs(a[i]+a[j])<x){
					x=abs(a[i]+a[j]);
					g=a[i];
					h=a[j];
				}
			}
		}
		cout << g+h << endl;
	}	
}
