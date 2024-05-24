#include<bits/stdc++.h>
using namespace std;
struct sv{
	string masv;
	string ten;
	string lop;
	float d1,d2,d3;
};
int cmp(sv &p,sv &q){
    return p.masv < q.masv;
}
void in(sv p[],int n){
	for(int i=0;i<n;i++){
		cin>>p[i].masv;
		scanf("\n");
		getline(cin,p[i].ten);
		cin>>p[i].lop;
		cin>>p[i].d1>>p[i].d2>>p[i].d3;
	}
	sort(p,p+n,cmp);
	for(int i=0;i<n;i++){
		cout<<i+1<<' ';
		cout<<p[i].masv<<' ';
		cout<<p[i].ten<<' ';
		cout<<p[i].lop<<' ';
		cout<<fixed<<setprecision(1)<<p[i].d1<<' '<<p[i].d2<<' '<<p[i].d3<<endl;
	}
}
int main() {
	struct sv ds[100];
	int n;
	cin>>n;
	
	in(ds,n);
}