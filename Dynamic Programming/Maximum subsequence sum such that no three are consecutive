#include <bits/stdc++.h>
using namespace std;

int steel(vector<int>&H, int n,int p,vector<vector<int>> &t){
    if(n<=0)return 0;
    if(t[n][p]!=0)return t[n][p];
    if(p==1)
        return t[n][p]=max(steel(H,n-2,0,t)+H[n-1],steel(H,n-1,0,t));
        
    else
        return t[n][p]=max(steel(H,n-1,1,t)+H[n-1],steel(H,n-1,0,t));
}


int main() {
	int te;
	cin>>te;
	while(te>0){
	    int n;
	    cin>>n;
	    vector<int> A(n);
	    for(int i=0;i<n;i++)
	        cin>>A[i];     
	    vector<vector<int>> t(n+1,vector<int>(2));
	    cout<<steel(A,n,0,t)<<"\n";
	        
	    te--;
	}
	
	return 0;
}
