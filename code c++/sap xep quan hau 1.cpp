#include<iostream>
using namespace std;
int n, dem=0, COT[100], DCXUOI[100], DCNGUOC[100], a[100];
void Init(){
	cin >> n;
	for(int i=1; i<=n; i++){
		COT[i]=1;
	}
	for(int i=1; i<2*n; i++){
		DCXUOI[i]=1;
		DCNGUOC[i]=1;
	}
}
 
void Result(){
	++dem;
	/*
	cout << "Ket qua " << ++dem << ": ";
	for(int i=1; i<=n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	*/
}
void Try(int i){
	for(int j=1; j<=n; j++){
		if(COT[j] && DCXUOI[i-j+n] && DCNGUOC[i+j-1]){
			a[i]=j;
			COT[j]=0; 
			DCXUOI[i-j+n]=0;
			DCNGUOC[i+j-1]=0;
			if(i==n){
				Result();
			}
			else{
				Try(i+1);
			}
			COT[j]=1; 
			DCXUOI[i-j+n]=1;
			DCNGUOC[i+j-1]=1;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		Init();
		Try(1);
		cout << dem << endl;
		dem=0;
	}
}