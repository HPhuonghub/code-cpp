#include <bits/stdc++.h>
#include <queue>
#define MAX 100
using namespace std;
class graph{
    int         n, A[MAX][MAX], chuaxet[MAX];
    public:
    void        readdata();
    void        init();
    void        queuebfs(int u);
};
void    graph::readdata(){
    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin >> A[i][j];
}
void graph::init(){
    for(int i=1; i<=n; i++) chuaxet[i]=1;
}
void graph::queuebfs(int u){
    queue<int> hangdoi;
    hangdoi.push(u);
    chuaxet[u]=0;
    while(!hangdoi.empty()){
        int s=hangdoi.front();  hangdoi.pop();  cout<<s<<" ";
        for(int t=1; t<=n; t++)
            if(A[s][t]==1 && chuaxet[t]==1){
                hangdoi.push(t);    chuaxet[t]=0;
            }
    }
}
int main(){ graph g;    g.readdata();   g.init();   g.queuebfs(1); }