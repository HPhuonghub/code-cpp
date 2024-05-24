#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		double a,b,c,d;
		cin >> a >> b >> c >> d;
		double s=sqrt((a-c)*(a-c)+(d-b)*(d-b));
		cout << fixed << setprecision(4) << s << endl;
	}
}
