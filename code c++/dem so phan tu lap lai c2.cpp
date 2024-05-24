#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int n,dem = 0,m=0,tf,s ;
	cin >> n;
	int a[n],b[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];tf=0;
		for(int j=0;j<i;j++){
			if(a[j] == a[i]) tf=1;
		}
		if(tf!=1) b[m++]=a[i]; 
	}
	for(int i=0;i<m;i++) {
		s=0;
		for(int j = 0;j<n;j++){
			if(a[j]==b[i]) s++;
		}
		if(s>1) dem+=s;
	}
	cout<< dem << endl;
}
}
