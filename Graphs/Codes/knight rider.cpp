#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>dx={-2,-2,-1,-1,1,1,2,2};
vector<int>dy={1,-1,2,-2,2,-2,1,-1};

int knight(vector<vector<int>>& grid, int r, int c,int n,int m,vector<vector<bool>> &vis,int p) {
    if(p==0)return 0;
    int move_count=0;
    int node_in_layer=1;
    int node_in_next_layer=0;
    queue<int> rs; rs.push(r);
    queue<int> cs; cs.push(c);
    int atr,atc,nextr,nextc;
    vis[r][c]=true;
    while(!rs.empty()){
        atr=rs.front();rs.pop();
        atc=cs.front();cs.pop();
        
        if(grid[atr][atc]==-1){
            grid[atr][atc]=0;
            p--;
            return move_count+knight(grid,atr,atc,n,m,vis,p);
        }
        for(int i=0;i<8;i++){
            nextr=atr+dx[i];
            nextc=atc+dy[i];
            if(nextr<0||nextc<0||nextr>=n||nextc>=m||vis[nextr][nextc]==true)continue;
            vis[nextr][nextc]=true;
            rs.push(nextr);
            cs.push(nextc);
            node_in_next_layer++;
        }
        node_in_layer--;
        if(node_in_layer==0){
            node_in_layer=node_in_next_layer;
            node_in_next_layer=0;
            move_count++;
        }
    }
    return 0;
}
int main() {
	int n=8,m=8;
	
	vector<vector<int>>grid(n,vector<int>(m,0));
	int pawns;
	cin>>pawns;
	
	for(int i=0;i<pawns;i++){
	    int x,y;
	    cin>>x>>y;
	    if(x>=0&&y>=0&&x<n&&y<m)
	    grid[x][y]=-1;
	}
	int kx,ky;
	cin>>kx>>ky;
	vector<vector<bool>> vis(n,vector<bool>(m,false));
	cout<<knight(grid,kx,ky,8,8,vis,pawns);
	return 0;
}
