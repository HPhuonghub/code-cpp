#include <bits/stdc++.h>
using namespace std;
int a[210], top=0;
int main(){
	string s; int t;
	while(cin >> s){
		if(s=="push"){
			cin >> t;
			a[++top]=t;
		}
		else if(s=="pop"){
			if(top>0)	top--;
		}
		else{
			if(top>0){
				for(int i=1;i<=top;i++) cout << a[i] << " ";
				cout << endl;
			}
			else cout << " empty" << endl;
		}
	}
}