#include<iostream>
using namespace std;
int bt(int n){
	int k,dem = 0,s;
	int a[n];
	for(int i = 0; i<n; i++) cin >>a[i];
	for(int i = 0; i < n;i++){
		for(k = 0; k < i; k++){
			if(a[i]==a[k]) break;
		}
		if(k<i) continue;
		else{s=0;
			for(k=0;k<n;k++){
				if(a[i]==a[k]) s++;
			}
			if(s>1) dem+=s;
		}
	}
	return(dem);
}
int main(){
	int T,n;
	cin >> T;
	while(T--){
		cin >> n;
		cout << bt(n) << endl;
	}
}
