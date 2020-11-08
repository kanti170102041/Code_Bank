#include <bits/stdc++.h>
using namespace std;

int findit(vector<vector<int>> &A){
    int n=A.size();
    vector<vector<int>> t(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0&&j==0)t[i][j]=A[i][j];
            
            else if(i==0) t[i][j]=A[i][j]+t[i][j-1];
            else if(j==0) t[i][j]=A[i][j]+t[i-1][j];
            else t[i][j]=max(t[i-1][j],t[i][j-1])+A[i][j];
            
        } 
    }
    return t[n-1][n-1];
    
    //recursive solution
    /*if(row==0&&col==0)return A[0][0];
    
    if(row==0)return A[row][col]+findit(A,row,col-1);
    if(col==0)return A[row][col]+findit(A,row-1,col);
    else
        return max(findit(A,row-1,col),findit(A,row,col-1))+A[row][col];
        */ 
}


int main() {
	int te;
	cin>>te;
	while(te>0){
	    int n;
	    cin>>n;
	    vector<vector<int>> A(n,vector<int>(n));
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>A[i][j];
	        }
	    }
	    cout<<(float)findit(A)/(2*n-1)<<"\n";
	   
	    te--;
	}

	return 0;
}
