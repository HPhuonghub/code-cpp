#include<bits/stdc++.h>
#define max 100
using namespace std;
typedef struct{
    int dau, cuoi, w;
}edge;
class graph{
    int     n, A[max][max], chuaxet[max], s, neT;
    edge    T[max];
    public:
    void    readdata();
    void    init(){ for(int i=1; i<=n; i++){    chuaxet[i]=1;   neT=0;    }   };
    void    treedfs(int u);
    int     gets(){ return s;   }
};
void    graph::readdata(){
    cin>>n>>s;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin>>A[i][j];
}
void    graph::treedfs(int u){
    chuaxet[u]=0;
    for(int v=1; v<=n; v++)
        if(A[u][v]==1 && chuaxet[v]==1){
            neT++;
            if(u>v) {    T[neT].dau=v;   T[neT].cuoi=u;  cout<<v<<" "<<u<<endl; }
            else    {    T[neT].dau=u;   T[neT].cuoi=v;  cout<<u<<" "<<v<<endl; }
            treedfs(v);
        }
}
int main(){
    graph g;
    g.readdata();
    g.init();
    cout << "DFS tree" << endl;
    g.treedfs(g.gets());
}