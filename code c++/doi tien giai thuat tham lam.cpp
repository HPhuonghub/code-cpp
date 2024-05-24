#include<bits/stdc++.h>
using namespace std;
int a[10]={1,2,5,10,20,50,100,200,500,1000};

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem=0,i=9,k=n;
		while(k>0){
			if(k>=a[i]){
				k=k-a[i];
				dem++;
			}
			else i--;
		}
		cout << dem << endl;
	}
}