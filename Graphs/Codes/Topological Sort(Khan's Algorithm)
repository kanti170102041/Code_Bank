vector<int> topoSort(int V, vector<int> adj[]) {
    vector<int> indeg(V,0);
    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++)
            indeg[adj[i][j]]++;
    }
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indeg[i]==0)q.push(i);
    }
    vector<int> topo;
    while(!q.empty()){
        int t=q.front();
        topo.push_back(t);
        q.pop();
        for(int i=0;i<adj[t].size();i++){
            indeg[adj[t][i]]--;
            if(indeg[adj[t][i]]==0)q.push(adj[t][i]);
        }
    }
    if(topo.size()!=V)return {};
    return topo;
}
