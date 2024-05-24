#include <bits/stdc++.h>
using namespace std;
int c[35], n, k, OK = 0;
void in(){
	for(int i=1;i<=k;i++) cout << c[i] << " ";
	cout << endl;
}
void sinh(){
	int i= k;
	while(c[i]-c[i-1]==1) i--;
	if(i==0) OK = 1;
	else{
		c[i]--;
		for(int j=i+1;j<=k;j++) c[j] = n-k+j;
	}
	return ;
}
main(){
	cin >> n >> k;
	for(int i=1;i<=k;i++) cin >> c[i];
	while(!OK){
		sinh();
		in();
	}
}