#include<bits/stdc++.h>
using namespace std;
struct banhang{
    string ten;
    string nhom;
    float mua,ban,loi;
    int stt;
};
int cmp(banhang &p,banhang &q){
	return p.loi>q.loi;
}
int main(){
    struct banhang p[50];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
    	p[i].stt=i+1;
    	scanf("\n");
    	getline(cin,p[i].ten);
    	scanf("\n");
    	getline(cin,p[i].nhom);
    	cin>>p[i].mua>>p[i].ban;
    	p[i].loi=p[i].ban-p[i].mua;
	}
	sort(p,p+n,cmp);
	for(int i=0;i<n;i++){
		cout<<p[i].stt<<' '<<p[i].ten<<' '<<p[i].nhom<<' ';
		cout<<fixed<<setprecision(2)<<p[i].loi<<endl;
	}
}
