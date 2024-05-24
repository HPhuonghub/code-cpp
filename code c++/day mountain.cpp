#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void day(int a[],int l,int r,string s){
	string s1="1",s2="0";
	int j=0;
	for(int i=l;i<r;i++){
		if(a[i]<a[i+1]){
			s.insert(j,s1);
			j++;
		}
		if(a[i]>a[i+1]){
			s.insert(j,s2);
			j++;
		}
	}
	if(s.find("01")!=-1){
		cout << "No" << endl;
	}
	else cout << "Yes" << endl;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		string s;
		cin >> n;
		int a[n],l,r;
		nhap(a,n);
		cin >> l >> r;
		day(a,l,r,s);
	}
}
