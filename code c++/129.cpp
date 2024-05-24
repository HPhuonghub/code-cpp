#include<bits/stdc++.h>
using namespace std;
int n,OK=0,a[35];
void in(){
	for(int i=0;i<n;i++) cout <<a[i];
	cout << " ";
}
void sinh(){
	int i=n-1;
	while(a[i]==8){
		a[i] = 6; i--;
	}
	if(i==-1) OK = 1;
	else a[i] = 8;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			a[i]=6;
		}
		cout << pow(2,n) <<endl;
		while(!OK){
			in();
			sinh();
		}
		OK=0;
		cout << endl;
	}
}