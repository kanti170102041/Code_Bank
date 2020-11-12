int lcs(int x, int y, string s1, string s2){
    
    vector<vector<int>> t(2,vector<int> (y+1,0));
    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            if(i==0||j==0)t[i%2][j]=0;
            else if(s1[i-1]==s2[j-1])t[i%2][j]=1+t[(i-1)%2][j-1];
            else t[i%2][j]=max(t[i%2][j-1],t[(i-1)%2][j]);
        }
    }
    return t[x%2][y];
}
