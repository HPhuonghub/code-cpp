#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int h){
	int i,j,k=l;
	int n1=m-l+1;
	int n2=h-m;
	int *L=new int[n1];
	int *R=new int[n2];
	for(i=0;i<n1;i++){
		L[i]=a[l+i];
	}
	for(j=0;j<n2;j++){
		R[j]=a[m+j+1];
	}
	i=0; j=0;
	while(i<n1&&j<n2){
		a[k++] = (L[i] <= R[j])? L[i++] :R[j++];
	}
	while(i<n1){
		a[k++]=L[i++];
	}
	while(j<n2){
		a[k++]=R[j++];
	}
}
void mergerSort(int a[],int l,int h){
	if(l < h){
		int m = l + (h - l) / 2;
		mergerSort(a,l,m);
		mergerSort(a,m+1,h);
		merge(a,l,m,h);
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		mergerSort(a,0,n-1);
		xuat(a,n);	
	}
}