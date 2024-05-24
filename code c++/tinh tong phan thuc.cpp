#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double s=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		s=s+(float)1/i;
	}
	cout << fixed << setprecision(4) << s << endl;
	return 0;
}
