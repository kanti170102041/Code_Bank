// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX
typedef pair<int,int> p;
int spanningTree(int V, int E, vector<vector<int>> &g) {
    vector<bool> vis(V,false);
    priority_queue<p,vector<p>,greater<p>> pq;
    vis[0]=true;
    for(int i=0;i<g[0].size();i++){
        if(g[0][i]!=INT_MAX)
        pq.push({g[0][i],i});
    }
    int mst=0;vector<int> mstree;
    mstree.push_back(0);
    while(!pq.empty()){
        int edl=pq.top().first;
        int cn=pq.top().second;
        pq.pop();
        if(vis[cn])continue;
        
        mst+=edl;
        mstree.push_back(cn);
        vis[cn]=true;
        for(int j=0;j<g[cn].size();j++){
            if(vis[j]==false&&g[cn][j]!=INT_MAX){
                
                pq.push({g[cn][j],j});
            }
        }
            
    }
    
    return mst;
}
