#include <bits/stdc++.h>
using namespace std;
int n,k;
char a[50],m,h='A';
void in(){
	for(int i=1;i<=k;i++) cout << a[i];
	cout << endl;
}
void Try(int i,char j){
	for(j;j<='A'+n;j++){
		a[i]=j;
		if(i==k) in();
		else Try(i+1,j);
	}
}
int main(){
	cin >> m >> k;
	n=m-h;
	Try(1,'A');
}