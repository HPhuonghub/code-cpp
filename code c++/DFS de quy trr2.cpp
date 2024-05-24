#include <bits/stdc++.h>
#define MAX 100
using namespace std;
class graph{
    int     n, A[MAX][MAX], chuaxet[MAX];
    public:
    void    readdata();
    void    init();
    void    dfs(int u);
};
int main(){
    graph   g;
    cout << "Enter the number of vertices n, and adjaciency matrix: ";
    g.readdata();
    g.init();
    g.dfs(1);
}
void    graph::readdata(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> A[i][j];
        }
    }
}
void    graph::init(){
    for(int i=1;i<=n;i++) chuaxet[i]=1;
}
void    graph::dfs(int u){
    cout << u << " ";
    chuaxet[u]=0;
    for(int i=1;i<=n;i++)
        if(A[u][i]==1 && chuaxet[i]==1)
            dfs(i);
}