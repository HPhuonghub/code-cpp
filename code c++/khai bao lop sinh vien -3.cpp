#include<bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien{
	private:
		string ma, ten, lop, ns;
		float diem;
	public:
		SinhVien(){
			ma = ten = lop = ns = "";
			diem = 0;
		}
		friend istream& operator >> (istream& , SinhVien&);
		friend ostream& operator << (ostream& , SinhVien);
};
istream& operator >> (istream &input, SinhVien &a){
	a.ma = "B20DCCN001";
	getline(cin, a.ten);
	cin >> a.lop >> a.ns >> a.diem;
	return input;
}
string chuanhoa(string &a){
	string x,s="";
	for(int i=0;i<a.size();i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
	}
	stringstream ss(a);
	vector<string> v;
	while(ss >> x){
		v.push_back(x);
	}
	for(int i=0;i<v.size();i++){
		v[i][0]-=32;
		s+= v[i]+ " ";
	}
	s.erase(s.size()-1);
	return s;
}
ostream& operator << (ostream &output , SinhVien a){
	// chuan hoa ngay sinh
	if(a.ns[2]!= '/') a.ns.insert(a.ns.begin()+ 0, '0');
	if(a.ns[5]!= '/') a.ns.insert(a.ns.begin()+ 3, '0');
	// chuan hoa ten
	a.ten =  chuanhoa(a.ten);
	// in ra thong tin sinh vien
	cout << a.ma << " "
		 << a.ten << " "
		 << a.lop << " "
		 << a.ns << " "
		 << fixed << setprecision(2) << a.diem;
	return output;
}
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
