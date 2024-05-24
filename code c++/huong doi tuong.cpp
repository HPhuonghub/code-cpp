#include <bits/stdc++.h>
using namespace std;

class NV{
	public:
	    string maSoNv;
	    string hoTen;
	    float hsl;
	    int lcb;
	    int pc,TongLuong;
	
	public: NV(string maSoNv,string hoTen,int hsl,int lcb,int pc){
		maSoNv = maSoNv;
		hoTen = hoTen;
		hsl = hsl;
		lcb = lcb;
		pc = pc;
	}
};

int main(){
	for(int i=0;i<3;i++){
		string b,c;
		int d,e,f;
		getline(cin,b);
		getline(cin,c);
		cin >> d >> e >> f;
		NV a(b,c,d,e,f);
	}
	/*NV a("abcef","Hoan Van A",5,800,900);
	for(int i=0;i<2;i++){
		cin >> nv[i].maSoNv;
		scanf("\n");
		getline(cin,nv[i].hoTen);
		cin >> nv[i].hsl >> nv[i].lcb >> nv[i].pc;
		nv[i].TongLuong=nv[i].hsl*nv[i].lcb+nv[i].pc;
	}
	for(int i=0;i<2;i++){
		cout << nv[i].maSoNv << endl;
		cout << nv[i].TongLuong << endl;
	}*/
	return 0;
}
