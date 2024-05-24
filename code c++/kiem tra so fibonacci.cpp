#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n == 0 || n == 1){
		    cout << "YES" << endl;
		    continue;
	    }
	    long long f1=0,f2=1,f=1;
	    while(f<n){
		    f=f1+f2;
		    f1=f2;
		    f2=f;
	    }
	    if(f==n){
		    cout << "YES" << endl;
	    }
	    else cout << "NO" << endl;
	}
}
