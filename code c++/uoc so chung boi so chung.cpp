#include <stdio.h>
#include <iostream>
using namespace std;
 
long ucln(long a, long b)
{
    long r;
    while (a%b != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}
 
int main()
{
	int t;
	cin >> t;
	while(t--){
        long a, b;
        cin >> a >> b;
        cout << a*b/ucln(a,b) << " " << ucln(a,b) <<endl;
    }
    return 0;
}
