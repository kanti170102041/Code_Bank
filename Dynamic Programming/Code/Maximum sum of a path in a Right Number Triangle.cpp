#include<bits/stdc++.h> 
using namespace std; 
int findMSum(vector<vector<int>> &A){
    int n=A.size();
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            
            A[i][j]=max(A[i+1][j],A[i+1][j+1])+A[i][j];
        }
        
    }
    return A[0][0];
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> A(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cin>>A[i][j];
            
        }
        
    }
    cout<<findMSum(A)<<"\n";
    
 return 0;   
}
