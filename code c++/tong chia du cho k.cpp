#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long k;
		cin >> n >> k;
		int s=0;
		for(int i=1;i<=n;i++){
			int m=i%k;
			    s=s+m;
		}
		if(s==k){
		    cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
}

