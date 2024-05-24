#include <iostream>
using namespace std;
int ucln(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}
int main(){
	int t;
	long long a,x,y;
	cin >> t;
	while(t--){
		cin >> a >> x >> y;
		int m=ucln(x,y);
		int dem=0;
		while(dem<m){
			cout << a;
			dem++;
		}
		cout << endl;
	}
}
