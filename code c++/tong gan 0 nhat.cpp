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
/*#include<iostream>
#include<math.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int min,t;
	for(int i = 0;i < n;i++){
		if(i == 1){
		    min= a[i] + a[i-1];
	    }
		if(i > 1){
			for(int j = 0; j < i; j++) {
			    t = a[i] + a[j];
			    if(abs(min) > abs(t)){
			        min = t;
		        }
		    }
	    }
    }
	cout << min << endl;
}
int main(){
	int t,n,a[n];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		xuat(a,n);
	}
}*/
