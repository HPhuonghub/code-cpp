#include <iostream>
using namespace std;

int main()
{
	long long n,s=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		long long m=1;
		for(int j=1;j<=i;j++){
			m=m*j;
		}
		s=s+m;
	}
	cout << s << endl;
}
