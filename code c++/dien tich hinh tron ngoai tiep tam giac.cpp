#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct dinh{
	double x,y;
};
void nhap( dinh &a){
	cin>>a.x>>a.y;
}
double xuat(dinh &a,dinh &b, dinh &c){
	double ab=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	double bc=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
	double ac=sqrt((c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y));
	
	if(ab+bc<=ac||ab+ac<=bc||ac+bc<=ab) return 0;
	else{
		double s=0.25*sqrt((ab+ac+bc)*(ab+ac-bc)*(ab+bc-ac)*(bc+ac-ab));
		double r=(ab*ac*bc)/(4*s);
		return r*r*PI;
	}
}
main(){
	struct dinh n,m,p;
	int t;
	cin>>t;
	while(t--){
		nhap(n);
		nhap(m);
		nhap(p);
		if(xuat(n,m,p)==0){
			cout << "INVALID" <<endl;
		}else{
			cout <<fixed << setprecision(3) << xuat(n,m,p) <<endl;
		}
	}
}