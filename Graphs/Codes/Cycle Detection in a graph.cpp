bool dfs(vector<vector<int>> &g,int at,vector<bool> &vis,vector<bool> &rec){
        vis[at]=true;
        rec[at]=true;
        for(int i=0;i<g[at].size();i++){
            if(vis[g[at][i]]==false){
                if(dfs(g,g[at][i],vis,rec)==true)return true;
            }
            if(rec[g[at][i]]==true)return true;
        }
        rec[at]=false;
        return false;
    }
    
    bool canFinish(int c, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        
        vector<vector<int>> g(c);
        
        for(int i=0;i<n;i++)
            g[prerequisites[i][0]].push_back(prerequisites[i][1]);
        
        vector<bool>vis(c,false);
        vector<bool>rec(c,false);
        
        for(int i=0;i<c;i++){
            if(vis[i]==false)
                if(dfs(g,i,vis,rec)==true)return false;
        }
        return true;
    }
