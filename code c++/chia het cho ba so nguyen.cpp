#include<bits/stdc++.h>
using namespace std;
long long bcnn(long long a, long long b){
    return a*b/(__gcd(a,b));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x,y,z,n;
        cin >> x >> y >> z >> n;
        long long a=bcnn(bcnn(x,y),z);
        long long b=pow(10,n-1);
        long long c=pow(10,n);
        long long d=b/a;
        long long e=c/a;
        if( d<1 && e<1 ){
            cout << "-1" << endl;
            continue;
        }
        if( d*a<b){
            d++;
            cout << d*a << endl;
        }
        else{
            cout << d*a << endl;
        }
    }
}
