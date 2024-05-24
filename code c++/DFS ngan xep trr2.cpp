#include <bits/stdc++.h>
using namespace std;
#define MAX 100
class graph{
  int   n, A[MAX][MAX], chuaxet[MAX];
  public:
  void      readdata();
  void      init();
  void      stackdfs(int u);
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
void graph::stackdfs(int u){
    stack<int> nganxep;
    nganxep.push(u);
    cout << u << " ";
    chuaxet[u]=0;
    while(!nganxep.empty()){
        int s=nganxep.top();    nganxep.pop();
        for(int i=1;i<=n;i++){
            if(A[s][i]==1 && chuaxet[i]==1){
                cout << i << " ";
                chuaxet[i]=0;
                nganxep.push(s);
                nganxep.push(i);
                break;
            }
        }
    }
}
int main(){
    graph g;
    g.readdata();
    g.init();
    g.stackdfs(1);
}