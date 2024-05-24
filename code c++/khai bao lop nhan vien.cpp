#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string ten,gt,sinh,dc,mst,ky;
	public:
		void nhap();
		void xuat();
};
void NhanVien::nhap(){
	getline(cin,ten);
	getline(cin,gt);
	getline(cin,sinh);
	getline(cin,dc);
	getline(cin,mst);
	getline(cin,ky);
}
void NhanVien::xuat(){
	if(sinh[1]=='/') sinh="0"+sinh;
	if(sinh[4]=='/') sinh.insert(3,"0");
	if(ky[1]=='/') ky="0"+ky;
	if(ky[4]=='/') ky.insert(3,"0");
	cout << "00001 " << ten << " " << gt  << " " << sinh << " ";
	cout << dc << " " << mst << " " << ky;
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
