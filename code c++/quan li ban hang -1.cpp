#include<bits/stdc++.h>
using namespace std;
int k1=1,k2=1,k3=1;
struct kh{
    int stt;
    string mkh1,name1,gt1,date1,dc1;
};
kh dskh[25];
struct mh{
    string ten1,dv1,mmh1;
    int stt,giamua1,giaban1;
};
mh dsmh[45];
class KhachHang{
    public:
    string mkh,name,gt,date,dc;
    friend istream &operator>>(istream &input,KhachHang &a){
        int d=k1;
        if(d<10)a.mkh="KH00"+to_string(d);
        else a.mkh="KH0"+to_string(d);
        dskh[k1].mkh1=a.mkh;
        scanf("\n");
        getline(input,a.name);
        dskh[k1].name1=a.name;
        input>>a.gt>>a.date;
        dskh[k1].gt1=a.gt;
        scanf("\n");
        getline(input,a.dc);
            dskh[k1].dc1=a.dc;
        k1++;
        return input;
    }
    //friend void HoaDon(KhachHang);
};
class MatHang{
    public:
    string ten,dv,mmh;
    int giamua,giaban;
    friend istream &operator>>(istream &input,MatHang &a){
        int d=k2;
        if(d<10)a.mmh="MH00"+to_string(d);
        else a.mmh="MH0"+to_string(d);
            dsmh[k2].mmh1=a.mmh;
        scanf("\n");
        getline(input,a.ten);
            dsmh[k2].ten1=a.ten;
        input>>a.dv>>a.giamua>>a.giaban;
            dsmh[k2].dv1=a.dv;
            dsmh[k2].giamua1=a.giamua;
            dsmh[k2].giaban1=a.giaban;
        k2++;
        return input;
    }
   // friend void HoaDon(MatHang);
};
class HoaDon{
    public:
    string mhd,kh,mh;
    int sl;
    friend istream &operator>>(istream &input,HoaDon &a){
        int d=k3;
        if(d<10)a.mhd="HD00"+to_string(d);
        else a.mhd="HD0"+to_string(d);
        k3++;
        input>>a.kh>>a.mh>>a.sl;
        return input;
    }
    friend ostream &operator<<(ostream &output,HoaDon &a){
        output<<a.mhd<<" ";
        long long tien;
        for(int i=0;i<k1;i++){
            if(dskh[i].mkh1==a.kh){
                output<<dskh[i].name1<<" ";
                output<<dskh[i].dc1<<" ";
            }
        }
        for(int i=0;i<k2;i++){
            if(dsmh[i].mmh1==a.mh){
                output<<dsmh[i].ten1<<" ";
                output<<dsmh[i].dv1<<" ";
                output<<dsmh[i].giamua1<<" ";
                output<<dsmh[i].giaban1<<" ";
                tien=dsmh[i].giaban1*a.sl;
            }
        }
        output<<a.sl<<" "<<tien<<endl;
        return output;
    }
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
