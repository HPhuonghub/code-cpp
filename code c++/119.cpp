#include<bits/stdc++.h>
#define max 100
using namespace std;
class graph{
    public:
  int   n,s,A[max][max],chuaxet[max];
  void readdata();
  void init(){
      for(int i=1;i<=n;i++){
          chuaxet[i]=1;
      }
  }
  void treedfs(int u);
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
                if(s<t) cout << s << " "<<t << endl;
                else cout << t << " " << s <<endl;
                chuaxet[t]=0;
                nganxep.push(s);
                nganxep.push(t);
                break;
            }
        }
    }
}
int main(){
    graph g;
    g.readdata();
    g.init();
    cout <<"Stack DFS tree"<< endl;
    g.treedfs(g.gets());
}