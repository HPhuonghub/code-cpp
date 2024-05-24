#include<bits/stdc++.h>
using namespace std;
 
bool chuaxet[1005];
vector<int> List[1005];
int n,m;
vector<pair<int,int> > res;
void rst(){
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=0;i<1005;i++) List[i].clear(); 
}
void dfs(int u){
    chuaxet[u]=false;
    for(int i=0;i<List[u].size();i++){
        int x=List[u][i];
        if(chuaxet[x]) dfs(x);
    }
}
int demlt(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(chuaxet[i]){
            dfs(i);
            dem++;
        }
    }
    return dem;
}
void Bridge(int canhbo, int soltdau, vector<pair<int,int> >dscanh){
    for(int i=0;i<m;i++){
        int x=dscanh[i].first, y=dscanh[i].second;
        if(i!=canhbo){
            List[x].push_back(y);
            List[y].push_back(x);
        }
    }
    int soltsau=demlt();
    if(soltsau>soltdau){
        int x=dscanh[canhbo].first, y=dscanh[canhbo].second;
        if(x<y) res.push_back({x,y});
        else res.push_back({y,x});
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        rst();
        res.clear();
        cin>>n>>m;
        int a,b;
        vector<pair<int,int> > dscanh;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            List[a].push_back(b);
            List[b].push_back(a);
            dscanh.push_back({a,b});
        }
        int soltdau=demlt();
        for(int i=0;i<m;i++){
            rst();
            Bridge(i,soltdau,dscanh);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            cout<<res[i].first<<" "<<res[i].second<<" ";
        }
        cout<<endl;
    }
}