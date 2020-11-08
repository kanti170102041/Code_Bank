#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_age;//for the oldest person 
bool dfs(vector<vector<pair<int,int>>> &g,vector<int> &vis, int at,vector<int> &age){
    vis[at]=1;
    
    for(int i=0;i<g[at].size();i++){
        int nn=g[at][i].second;
        int d=g[at][i].first;
        if(age[nn]!=-1&&age[nn]!=d+age[at])return true;//this is contradiction
        if(age[nn]==-1)age[nn]=d+age[at];
        max_age=max(max_age,age[nn]);
        if(vis[nn]==0)
            if(dfs(g,vis,nn,age))return true;
    }
    return false;
}
    
int solve(vector<vector<pair<int,int>>> &g,vector<int> & inDeg) {
    int n=g.size();
    vector<int>vis(n,-1);
    vector<int> age(n,-1);
    max_age=INT_MIN;
    for(int i=0;i<n;i++)
        if(inDeg[i]==0) age[i]=0;
           
    fill(vis.begin(),vis.end(),0);
    for(int i=0;i<n;i++)
        if(age[i]==0)// the person with 0 Indegree is considered to have absolute age
            if(dfs(g,vis,i,age)) return -1;
    if(max_age>100) return -1;
    return max_age;
}  
    
int main()
{
   int n,q;
   cin>>n;
   cin>>q;
   vector<vector<pair<int,int>>> g(n);
   vector<int> inDeg(n,0);
   for(int i=0;i<q;i++){
       int p1,p2,d;
       cin>>p1>>p2>>d;
       if(d>=0){
           g[p1-1].push_back(make_pair(d,p2-1));
           inDeg[p2-1]++;
       }
       else if(d<0){
           g[p2-1].push_back(make_pair(-d,p1-1));
           inDeg[p1-1]++;
       }
   }
    cout<<solve(g,inDeg)<<endl;
   return 0;
}
