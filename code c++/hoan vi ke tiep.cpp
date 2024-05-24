#include <bits/stdc++.h>
using namespace std;
int A[15], m, n, OK = 0;
void in(){
	int m=n;
	for(int i=1;i<=n;i++){
		if(A[i]==n-i+1) m--;
	}
	if(m==0){
		for(int i=1;i<=n;i++) cout << i << " ";
		OK=1;
	}
	else{
		for(int i=1;i<=n;i++) cout << A[i] << " ";
		OK=1;
	}
}
void sinh(){
	int i= n-1, j;
	while(A[i] > A[i+1]) i--;
	if(i==0)	OK = 1 ;
	else{
		j = n;
		while(A[j] < A[i]) j--;
		swap(A[i], A[j]);
		int d= i +1, c = n;
		while(d<c){
			swap(A[d], A[c]);
			d++; c--;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >>  n;
		for(int i=1;i<=n;i++){
			cin >> A[i];
		}
		while(!OK){
			sinh();
			in();
		}
		OK=0;
		cout << endl;
	}
}