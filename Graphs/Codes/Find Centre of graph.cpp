
vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
      vector<int> deg(n,0);
      vector<int> ans;
      vector<bool> vis(n,false);
      vector<vector<int>> g(n);
      vector<int> leaves;
      for(int i=0;i<edges.size();i++){

          g[edges[i][0]].push_back(edges[i][1]);
          g[edges[i][1]].push_back(edges[i][0]);
          deg[edges[i][0]]++;
          deg[edges[i][1]]++;
      }
      queue<int>q;
      for(int i=0;i<n;i++){
          if(deg[i]==1||deg[i]==0){
              q.push(i);
            }
      }
      int m=q.size();
      while(!q.empty()){

         int c=q.size();
         ans.clear();
          while(c--){
          int node=q.front();q.pop();
          for(int i=0;i<g[node].size();i++){
              deg[g[node][i]]--;
              if(deg[g[node][i]]==1)
                  q.push(g[node][i]);
          }
          deg[node]=0;
          ans.push_back(node);  
        }
      }
    return ans;
}
