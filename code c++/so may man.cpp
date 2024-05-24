#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int m=n%100;
		if(m==86){
			cout << "1" << endl;
		}
		else 
		    cout << "0" << endl;
	}
}
