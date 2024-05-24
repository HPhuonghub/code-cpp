#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int dem=1;
		string s;
		cin >> s;
		for(int i=0;i<s.size();i++){
			int a=i,b=i;
			while(a>=0 && b<s.size()){
				if(s[a]==s[b]){
					dem=max(dem,b-a+1);
					a--;
					b++;
				}
				else break;
			}
		}
		for(int i=0;i<s.size()-1;i++){
			int a=i,b=i+1;
			while(a>=0 && b<s.size()){
				if(s[a]==s[b]){
					dem=max(dem,b-a+1);
					a--;
					b++;
				}
				else break;
			}
		}
		cout << dem << endl;	
	}
}