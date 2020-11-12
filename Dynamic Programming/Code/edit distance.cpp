int editdistance(string A, string B, int n, int m){
    
    vector<vector<int>> t(n+1,vector<int>(m+1));
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0) t[i][j]=j;
            else if(j==0) t[i][j]=i;
            else if(A[i-1]==B[j-1]){
                t[i][j]=t[i-1][j-1];// this means no opereation needed for crr characters hence no cost added
                
            }
            else{
                t[i][j]=min(1+t[i-1][j],min(1+t[i][j-1],1+t[i-1][j-1])); // i-1,j => deletion; i,j-1 => insertion ; i-1,j-1 => replacement 
                //1 is added as cost to all the operations
            }
            
        }
    }
    return t[n][m];
    
}

int Solution::minDistance(string A, string B) {
    int n=A.size();
    int m=B.size();
    return editdistance(A,B,n,m);
}
