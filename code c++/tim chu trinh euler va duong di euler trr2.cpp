#include <bits/stdc++.h>
#include <stack>
#define max 100
using namespace std;
class graph{
    int     n, a[max][max], s;
    public:
    void    readdata();
    void    init();
    void    dfs();
    void    euler(int u);
    int     gets();
};
int graph::gets(){
    return s;
}
void    graph::readdata(){
    cin >> n >> s;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)   cin >> a[i][j];
}
void graph::euler(int u){
    stack<int> nganxep, ce;
    nganxep.push(u);
    while(!nganxep.empty()){
        int s=nganxep.top(), empty=1;
        for(int t=1;t<=n;t++)
            if(a[s][t]==1){
                empty=0;    nganxep.push(t);
                a[s][t]=a[t][s]=0;      break;
            }
        if(empty==1){
            nganxep.pop();  ce.push(s);
        }
    }
    while(!ce.empty()){
        cout << ce.top() << " ";    ce.pop();
    }
}
int main(){
    graph g;    g.readdata();   g.euler(g.gets());
}