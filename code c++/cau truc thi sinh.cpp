#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
	string hoten,sinh;
	float d1,d2,d3;
	float tong=0;
};
void nhap(ThiSinh &A){
	getline(cin,A.hoten);
	getline(cin,A.sinh);
	cin >> A.d1 >> A.d2 >> A.d3;
}
void in(ThiSinh &A){
	float tongdiem;
	tongdiem=A.d1+A.d2+A.d3;
	cout << A.hoten << " " << A.sinh << " ";
	cout << setprecision (1) << fixed << tongdiem;
}
int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
