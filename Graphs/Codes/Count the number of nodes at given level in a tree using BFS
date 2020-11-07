#include <bits/stdc++.h>
using namespace std;
void fillgraph(vector<vector<int>>&g,int s,int d){
    
    g[s].push_back(d);
    //g[d].push_back(s);
}
int BFS(vector<vector<int>>&g,int k,int V){
    vector<bool> vis(V+1,false);
    vector<int> l(V+1,0);
    //int l[0]=0;
    queue<int> q;
    q.push(0);
    int c=0;
    while(!q.empty()){
        int i=q.front();
        q.pop();
        
        for(int j=0;j<g[i].size();j++){
            
            if(vis[g[i][j]]==false){
                vis[g[i][j]]=true;
                l[g[i][j]]=l[i]+1;
                q.push(g[i][j]);
            }
            
        }
        
    }
    for(int i=0;i<=V;i++){
        if(l[i]==k)c++;
    }
    
    return c;
}

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> ed(n);
    int V=0;
    for(int i=0;i<n;i++){
        
        cin>>ed[i].first>>ed[i].second;
        V=max(V,max(ed[i].first,ed[i].second));
    }
    int k;
    cin>>k;
    //cout<<V;
    vector<vector<int>> g(V+1);
    for(int i=0;i<n;i++){
        fillgraph(g,ed[i].first,ed[i].second);
    }
    cout<<BFS(g,k,V)<<"\n";
	return 0;
}
