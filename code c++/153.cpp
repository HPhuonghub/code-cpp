#include<bits/stdc++.h>
using namespace std;
#define max 100
#define INF 100000
class graph{
    int n,C[max][max],d[max][max],next[max][max];
    public:
    void readdata(){
        cin >> n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin >> C[i][j];
                if(C[i][j]==0 && i!=j) C[i][j]=INF;
            }
        }
    }
    void floyd();
};
void graph::floyd(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i][j]=C[i][j];
            if(C[i][j] != INF) next[i][j]=j;
            else next[i][j]=NULL;
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(d[i][j]>d[i][k]+d[k][j]){
                    d[i][j]=d[i][k]+d[k][j];
                    next[i][j]=next[i][k];
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x=i;
            queue<int> q;
            q.push(x);
            while(x!=j){
                x=next[x][j];
                q.push(x);
            }
            cout << "K/c "<<i<< " -> "<<j<<" = "<<d[i][j]<<"; ";
            while(q.size()>1){
                cout << q.front() << " --> ";
                q.pop();
            }
            cout << q.front()<<endl;
        }
        cout << endl;
    }
}
main(){
    graph g;
    g.readdata();
    g.floyd();
}