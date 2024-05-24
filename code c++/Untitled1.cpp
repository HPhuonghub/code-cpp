#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void swap(int &a,int &b){
	int c=b;
	    b=a;
	    a=c;
	cout << a << " " << b << endl;
}
int main(){
	int a,b;
	cin >> a >> b;
	swap(a,b);
}
