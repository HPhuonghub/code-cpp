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
void ChuanHoaTen(string &a){
	stringstream s(a);
	string word;
	vector<string> tu;
	while(s>>word){
		transform(word.begin(),word.end(),word.begin(),::tolower);
		tu.push_back(word);
	}
	for(int i=0;i<tu.size();i++){
		char t=tu[i][0]-32;
		cout << t;
		tu[i].erase(tu[i].begin() + 0);
		cout << tu[i];
		if(i<tu.size()-1){
			cout << " ";
		}
	}
}
ostream& operator << (ostream &out,SinhVien a){
	out << a.ma << " ";
	ChuanHoaTen(a.ten);
	out << " " << a.lop << " ";
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