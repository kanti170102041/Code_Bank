#define mod 1000000007
//top down apoorach 
int Solution::solve(int A, int B) {
    vector<vector<int>> t(A+1,vector<int>(B+1,0));
    
    for(int i=1;i<=A;i++){
        for(int j=0;j<=B;j++){
            
            if(i==1&&j>0&&j<=9)t[i][j]=1;
            else if(i==1&&(j==0||j>9))t[i][j]=0;
            for(int k=0;k<=9;k++){
                if(k<=j)
                t[i][j]=(t[i][j]+t[i-1][j-k]%mod)%mod;
                
            }
            
        }
        
    }
    
    return t[A][B];
}

/*
Recursive memozised code,
note: vector<vector<int>> t should be initialized with -1

int ways(int D, int S,vector<vector<int>>&t){
    
if(D==1&&S>0&&S<=9)return 1;
    if(D==1&&(S==0||S>9))return 0;
    if(t[D][S]!=-1)return t[D][S];
    int total=0;
    for(int i=0;i<10;i++){
        
        if(i<=S) 
            total=(total+ways(D-1,S-i,t)%1000000007)%1000000007;
        
    }
    return t[D][S]=total;
}*/
