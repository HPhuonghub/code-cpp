#include <bits/stdc++.h>
using namespace std;
int a[35], n, k, OK = 0,c[35],b[35];
set<int> d;
void in(){
	for(int i=1;i<=k;i++) cout << b[a[i]] << " ";
	cout << endl;
}
void sinh(){
	int i=k;
	while(a[i] == n-k+i) i--;
	if(i==0) OK = 1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j] = a[j-1] +1;
	}
}
int main(){
	int m,t=1;
	cin >> m >> k;
	for(int i=1;i<=m;i++){
		cin >> c[i];
		d.insert(c[i]);
	}
	for(auto x:d){
		b[t]=x;
		t++;
	}
	for(int i=1;i<=k;i++) a[i]=i;
	n=d.size();
	while(!OK){
		in();
		sinh();
	}
}