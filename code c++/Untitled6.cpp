#include <iostream>
using namespace std;

int(*f_function)(int,int);
int hieu(int a,int b){
	    return(a-b);
}
int tong(int a,int b){
	    return(a+b);
}
int main(){
	int a,b;
	cin >> a >> b;
	f_function=&hieu;
	int m= f_function(a,b);
	cout << m << endl;
	
	f_function=&tong;
	int n= f_function(a,b);
	cout << n;
}
