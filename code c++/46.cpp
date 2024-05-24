#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    int stt;
    string ma,ten,lop,email,dnghiep;
};
void nhap(SinhVien &s){
    cin >> s.ma;
    cin.ignore();
    getline(cin,s.ten);
    cin >> s.lop >> s.email >> s.dnghiep;
}
int cmp (SinhVien &a ,SinhVien &b){
    return a.ten < b.ten;
}
void in (SinhVien s){
    cout << s.stt <<" "<<s.ma<<" "<<s.ten<<" "<<s.lop<<" "<<s.email<<" "<<s.dnghiep;
    cout <<endl;
}
int main(){
    int n;
    cin >> n;
    SinhVien s[n];
    for(int i=0;i<n;i++){
        s[i].stt=i+1;
        nhap(s[i]);
    }
    sort(s,s+n,cmp);
    int q;
    cin >> q;
    while(q--){
        string cty;
        cin >> cty;
        for(int i=0;i<n;i++){
            if(cty.compare(s[i].dnghiep)==0){
                in(s[i]);
            }
        }
    } 
}
