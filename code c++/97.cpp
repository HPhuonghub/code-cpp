#include <bits/stdc++.h>
using namespace std;
int A[15], n, OK = 0;
void in(){
	for(int i=1;i<=n;i++) cout << A[i] << " ";
	cout << endl;
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
	cin >>  n;
	for(int i=1;i<=n;i++) cin >> A[i];
	sort(A+1,A+n+1);
	while(!OK){
		in();
		sinh();
	}
}