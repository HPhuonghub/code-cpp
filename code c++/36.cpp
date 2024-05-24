#include<iostream>
using namespace std;
int main(){
    int m,s;
    cin >> m>> s;
    long long max=0,min=0,t=s/9,dv=1,du=s%9,u=(s-1)/9,dut;
    if(1 <= s && s <= 9*m){
    while(m--){
        max*=10;
        if(t>0) max += 9;
        if (t==0) max += du;
        if(u>0){
            min = 9 * dv + min;    
        }
        if(u==0){
            dut = (du==0?9:du);
            if(m>0) min = min + dv*(du==1?0:dut-1);
            if(m==0) min = min + dv* dut;
        }
        if(u<0){
            if(m==0) min+= dv;
        }
        t--;
        u--;
        dv*=10;
    }
    cout << min << ' ' << max;
}
else cout <<"-1 -1";
}
