#include<bits/stdc++.h>
using namespace std;

void process(){
	string s;
	int r=0;
	cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
        	r=2*r+1;
        	r=r%5;
        }
        else{
        	r=r*2+0;
        	r=r%5;
		}
	}
	if(r%5==0) cout << "Yes" << endl;
	else cout << "No" << endl;
}
int main(){
	int t;
    cin>>t;
    while(t--){
        process();
    }
}
