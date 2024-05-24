#include<bits/stdc++.h>
using namespace std;
int n, m, s, t;
vector<int> adj[1000005];
bool visited[1000005];
int parent[1000005];

void input(){
    cin >> n >> m >> s >> t;
    for(int i=1; i<=m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x :adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                parent[x] = v;
            }
        }
    }
}
void Path(int s, int t){
    BFS(s);
    if(!visited[t]){
        cout << "-1\n";
    }else{
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for(int x : path){
            cout << x << " ";
        }
    }
}
int main(){
    int TC; cin >> TC;
    while(TC--){
        input();
        Path(s,t);
        cout << endl;
        memset(adj, 0, sizeof(adj));
    }
    return 0;
}