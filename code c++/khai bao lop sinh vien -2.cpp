#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ten,lop,sinh,ma;
		float diem;
	public:
        SinhVien(){
			ma = ten = lop = sinh = "";
			diem = 0;
		}
        friend istream& operator >> (istream& , SinhVien&);
        friend ostream& operator << (ostream& , SinhVien);
};
istream& operator >> (istream &in, SinhVien &a){
	a.ma="B20DCCN001";
	getline(cin,a.ten);
	in >> a.lop >> a.sinh >> a.diem;
	return in;
}
ostream& operator << (ostream &out, SinhVien a){
	if(a.sinh[2]!='/') a.sinh.insert(a.sinh.begin()+0 ,'0');
	if(a.sinh[5]!='/') a.sinh.insert(a.sinh.begin()+3 ,'0');
	out << a.ma << " "
		 << a.ten << " "
		 << a.lop << " "
		 << a.sinh << " "
		 << fixed << setprecision(2) << a.diem;
	return out;
}
int main(){
	SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}