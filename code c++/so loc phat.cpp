#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		int k=0,h=0;
		while(n>0){
			int m;
			m=n%10;
			n=n/10;
			if(m==0||m==6||m==8){
				k++;
			}
			h++;
		}
		if(h==k){
			cout << "YES" << endl;
		}
		else{
		    cout << "NO" << endl;
	    }
	}
}
