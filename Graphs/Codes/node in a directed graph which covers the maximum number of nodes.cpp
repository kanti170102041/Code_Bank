#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> &g, vector<bool> &vis,int at){
    vis[at]=true;
    int c=1;
    for(int i=0;i<g[at].size();i++){
        if(vis[g[at][i]]==false)
        c+=dfs(g,vis,g[at][i]);
    }
    return c;
}

int solve(vector<vector<int>> &g, unordered_map<int,int> &indeg, int n){
 
 int maxval=INT_MIN;
 int ansnode=-1;
 for(int i=0;i<n;i++){
    vector<bool> vis(n,false);    
     if(indeg.find(i)!=indeg.end()){
        int nodes=dfs(g,vis,i);
        if(maxval<nodes){
            maxval=nodes;
            ansnode=i;
        }
    }
 }
  return ansnode;  
}

int main()
{
   int n,q;
   cin>>n;
   cin>>q;
   vector<vector<int>> g(n);
   unordered_map<int,int> Deg;
   int minIndeg=INT_MAX;
   for(int i=0;i<q;i++){
       int p1,p2;
       cin>>p1>>p2;
       Deg[p2]++;
       Deg[p1]++;
       g[p1].push_back(p2);
   }
  
    cout<<solve(g,Deg,n)<<endl;
    
   return 0;
}
