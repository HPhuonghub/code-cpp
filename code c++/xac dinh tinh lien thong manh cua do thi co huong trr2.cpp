#include <bits/stdc++.h>
#define max 100
using namespace std;
class graph{
    int n,A[max][max],chuaxet[max];
    public:
    void readdata();
    void reinit();
    void dfs(int u);
    bool check();
};
void graph::readdata(){
    cin >> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> A[i][j];
}
void graph::reinit(){
    for(int i=1;i<=n;i++){
        chuaxet[i]=1;
    }
}
void graph::dfs(int u){
    chuaxet[u]=0;
    for(int v=1;v<=n;v++){
        if(A[u][v]==1 && chuaxet[v]==1){
            dfs(v);
        }
    }
}
bool graph::check(){
    reinit();
    for(int u=1;u<=n;u++){
        int dem=0;
        dfs(u);
        for(int k=1;k<=n;k++){
            if(chuaxet[k]==0) dem++;
        }
        if(dem!=n) return false;
        else reinit();
    }
    return true;
}
int main(){
    graph g;
    g.readdata();
    if(g.check()) cout << "strongly connected";
    else cout << "not strongly connected";
}