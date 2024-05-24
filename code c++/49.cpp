#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string ma,ten,ns,gt,diachi,thue,hdong;
    int a[3];
    int tinh;
};
int x=1;
void nhap (NhanVien &s){
    s.ma = "000";
    if(x<10){
        s.ma.push_back('0');
        s.ma.push_back(x+48);
    }else{
        s.ma.push_back(x/10+48);
        s.ma.push_back(x%10+48);
    }
    cin.ignore();
    getline(cin,s.ten);
    cin >> s.gt >> s.ns;
    cin.ignore();
    getline(cin , s.diachi);
    cin >> s.thue >> s.hdong;
    x++;
}
int cmp( NhanVien &a , NhanVien &b){
    return a.tinh < b.tinh;
}
void sapxep(NhanVien s[],int n){
    for(int i=0;i<n;i++){
        s[i].a[0]=0;
        s[i].a[1]=0;
        s[i].a[2]=0;
    }
    for(int i=0;i<n;i++){
        int d=0;
        for(int j=0;j<s[i].ns.size();j++){
            if(s[i].ns[j]=='/') d++;
            s[i].a[d] =s[i].a[d]*10 + (s[i].ns[j]-48);
        }
        s[i].tinh = s[i].a[0]*30 +s[i].a[1] + s[i].a[2]*365;
    }
    sort(s,s+n,cmp);
}
void inds(NhanVien s[],int n){
    for(int i=0;i<n;i++){
        cout <<s[i].ma<<" "<<s[i].ten<<" "<<s[i].gt<<" "<<s[i].ns<<" "<<s[i].diachi<<" "<<s[i].thue<<" "<<s[i].hdong<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
