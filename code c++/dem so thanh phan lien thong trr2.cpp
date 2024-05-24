#include <bits/stdc++.h>
#define max 100
using namespace std;
class graph{
    public:
    int n,A[max][max],chuaxet[max];
    void readdata();
    void init();
    void bfs(int u);
    void duyetTPLT();
};
void graph::readdata(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> A[i][j];
        }
    }
}
void graph::init(){
    for(int i=1;i<=n;i++){
        chuaxet[i]=1;
    }
}
void graph::bfs(int u){
    queue<int> hangdoi;
    hangdoi.push(u);
    chuaxet[u]=0;
    while(!hangdoi.empty()){
        int u=hangdoi.front();
        hangdoi.pop();
        for(int v=1;v<=n;v++){
            if(A[u][v]==1 && chuaxet[v]==1){
                hangdoi.push(v);
                chuaxet[v]=0;
            }
        }
    }
}
void graph::duyetTPLT(){
    int dem=0;
    for(int u=1;u<=n;u++){
        if(chuaxet[u]==1){
            dem++;
            bfs(u);
        }
    }
    cout << dem;
}
int main(){
    graph g;    g.readdata();   g.init();   g.duyetTPLT();
}