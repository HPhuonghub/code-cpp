#include<iostream>
using namespace std;
void run(){
	int n,t=0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n ; i++){
		cin >> a[i];
		if(i!=0){
			if(a[i-1]!=0){
				if(a[i]==a[i-1]) {
					a[t++] = 2 * a[i-1];
					a[i]=0;
				}
				else a[t++]=a[i-1];
			}
			if(i==n-1){
				if(a[i]!=0) a[t++]=a[i];
			}
		}
	}
	for(int i = 0;i< n; i++ ) {
		if(i<t) cout << a[i];
		else cout << '0';
		cout << ' ';
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		run();
		cout << endl;
	}
	return 0;
}