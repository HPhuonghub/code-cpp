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
		friend istream& operator >> (istream &in,SinhVien &a);
		friend ostream& operator << (ostream &out,SinhVien a);
};
int dem=0;
istream& operator >> (istream &in,SinhVien &a){
    cin.ignore();
    dem++;
    if(dem < 10) a.ma = a.ma + "B20DCCN00" + char(dem+48);
    else{
    	int m=dem%10;
    	int n=dem/10;
    	a.ma = a.ma + "B20DCCN0" + char(n+48) + char(m+48);
	}
    getline(cin,a.ten);
    in >> a.lop >> a.sinh >> a.diem;
    return in;
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
ostream& operator << (ostream &out,SinhVien a){
	a.ten = chuanhoa(a.ten);
	out << a.ma << " " << a.ten << " " << a.lop << " ";
	if(a.sinh[2]!='/') a.sinh.insert(a.sinh.begin()+ 0, '0');
	if(a.sinh[5]!='/') a.sinh.insert(a.sinh.begin()+ 3, '0');
	out << a.sinh << " ";
	out << fixed << setprecision(2) << a.diem << endl; 
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}