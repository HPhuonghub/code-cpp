#include <bits/stdc++.h>
using namespace std;
int C[35], n ,k ,OK = 0;
void in(){
	for(int i=1; i<=k;i++) cout << C[i] << " ";
	cout << endl;
}
void sinh(){
	int i=k;
	while(C[i]-C[i-1]==1) i--;
	if(i==0) OK = 1;
	else{
		C[i]--;
		for(int j=i+1;j<=k;j++) C[j] = n-k+j;
	}
}
main(){
	cin >> n >> k;
	C[0] = 0;
	for(int i=1;i<=k;i++) C[i] = n-k+i;
	while(!OK){
		in();
		sinh();
	}
}