#include <bits/stdc++.h>
using namespace std;
int A[15], n, OK = 0;
void in(){
	for(int i=1;i<=n;i++) cout << A[i];
	cout << " ";
}
void sinh(){
	int i= n-1, j;
	while(A[i] > A[i+1]) i--;
	if(i==0) OK = 1;
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
		for(int i=1;i<=n;i++) A[i] = i;
		while(!OK){
			in();
			sinh();
		}
		OK = 0;
		cout << endl;
	}
}