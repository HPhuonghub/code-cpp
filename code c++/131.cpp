#include<bits/stdc++.h>
using namespace std;
int n,OK=0,a[35];
int A[15], n, OK1 = 0;
void in1(){
	for(int i=1;i<=n;i++) cout << A[i];
	cout << " ";
}
void sinh1(){
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
void in(){
	for(int i=0;i<n;i++) cout <<a[i];
	cout << endl;
}
void sinh(){
	int i=n-1;
	while(a[i]==n){
		a[i]=1;
		i--;
	}
	if(i==-1) OK = 1;
	else a[i]++;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			a[i]=1;
		}
		for(int i=1;i<=n;i++) A[i] = i;
		while(!OK1){
			in();
			sinh();
		}
		while(!OK){
			cout << "AB";
			in();
			sinh();
		}
		OK=0;
		while(!OK){
			cout << "BA";
			in();
			sinh();
		}
		OK=0;
	}
}