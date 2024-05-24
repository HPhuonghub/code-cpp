#include <iostream>
using namespace std;

int n;
void Tong(){
	int s=0;
	while(n>0){
		s=s+n%10;
		n=n/10;
	}
	n=s;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		while(n>9)
		Tong();
		cout << n << endl;
	}
}
