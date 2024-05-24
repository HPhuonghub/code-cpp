#include <bits/stdc++.h>
using namespace std;
struct Tuyen{
	string ma,ten;
	float dt,dl,dh;
};
void nhap(Tuyen &a){
	getline(cin,a.ma);
	getline(cin,a.ten);
	cin >> a.dt >> a.dl >> a.dh;
}
void in(Tuyen &a){
	float c=a.dh+a.dl+a.dt+a.dt;
	float d;
	cout << a.ma << " " << a.ten << " ";
	if(a.ma[2]=='1'){
		cout << "0.5 ";
		d=c+0.5;
	}
	if(a.ma[2]=='2'){
		cout << "1 ";
		d=c+1.0;
	}
	if(a.ma[2]=='3'){
		cout << "2.5 ";
		d=c+2.5;
	}
	cout << c << " ";
	if(d<24){
		cout << "TRUOT";
		
	}
	else cout << "TRUNG TUYEN";
}
int main(){
	struct Tuyen a;
	nhap(a);
	in(a);
}
