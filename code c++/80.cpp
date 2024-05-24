#include <bits/stdc++.h>
using namespace std;
int B[10];
void in(){
	for(int i=1;i<=8;i++){
		cout << B[i];
		if(i==2 || i==4) cout << "/";
	}
	cout << endl;
}
int check(){
	if(B[1]==0 && B[2]==0) return 0;
	if(B[3]==2) return 0;
	if(B[3]==0 && B[4]==0) return 0;
	if(B[5]==0) return 0;
	return 1;
}
void quaylui(int i){
	int j;
	for(int j=0;j<=1;j++){
		if(j==1) B[i] = 2;
		else B[i] = 0;
		if(i==8){
			if(check()) in();
		}
		else quaylui(i+1);
	}
}
int main(){
	quaylui(1);
}