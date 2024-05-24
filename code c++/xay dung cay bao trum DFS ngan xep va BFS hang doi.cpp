#include <bits/stdc++.h>
#define max 100
using namespace std;
class graph{
    int     n,s,A[max][max],chuaxet[max];
    public:
    void    readdata();
    void    init(){
        for(int i=1;i<=n;i++){
            chuaxet[i]=1;
        }
    }
    void treedfs(int u);
    void treebfs(int u);
    int gets(){
        return s;
    }
};
void graph::readdata(){
    cin >> n >> s;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> A[i][j];
        }
    }
}
void graph::treedfs(int u){
    stack<int> nganxep;
    nganxep.push(u);
    chuaxet[u]=0;
    while(!nganxep.empty()){
        int s=nganxep.top();
        nganxep.pop();
        for(int t=1;t<=n;t++){
            if(A[s][t]==1 && chuaxet[t]==1){
                if(s<t) cout << s << " "<<t<<endl;
                else cout <<t << " " << s << endl;
                chuaxet[t]=0;
                nganxep.push(s);
                nganxep.push(t);
                break;
            }
        }
    }
}
void graph::treebfs(int u){
    queue<int> hangdoi;
    chuaxet[u]=0;
    hangdoi.push(u);
    while(!hangdoi.empty()){
        int s=hangdoi.front();
        hangdoi.pop();
        for(int t=1;t<=n;t++){
            if(A[s][t]==1 && chuaxet[t]==1){
                if(s<t) cout << s << " " << t <<endl;
                else cout << t << " " << s << endl;
                chuaxet[t]=0;
                hangdoi.push(t);
            }
        }
    }
}
int main(){
    graph g;
    g.readdata();
    g.init();
    cout << "DFS tree" << endl;
    g.treedfs(g.gets());
    g.init();
    cout << "BFS tree"<< endl;
    g.treebfs(g.gets());
}