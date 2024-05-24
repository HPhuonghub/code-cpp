#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
struct Point{
	double x, y;
};
void input(Point &A){
	cin >> A.x >> A.y;
}
double distance(Point a,Point b){
	double c=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return c;
}
void in(Point m){
	cout << m.x << " " << m.y;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
