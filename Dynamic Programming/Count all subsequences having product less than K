#include<bits/stdc++.h>
using namespace std;

int prod(vector<int>A,long n,long p, int lim, vector<vector<long>>&t){
    
   //if(p>=lim)return -1; 
   if(n==0)return 1;
  if(t[n][p]!=-1)return t[n][p];
    if(p*A[n-1]<lim)
        return t[n][p]=prod(A,n-1,p*A[n-1],lim,t)+prod(A,n-1,p,lim,t);
    else
       return t[n][p]=prod(A,n-1,p,lim,t);
    
}
int main(){
    long n;
    cin>>n;
    int l;
    cin>>l;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<vector<long>> t(n+1,vector<long>(l+1,-1));
    cout<<prod(A,n,1,l,t)-1<<"\n";
    
    return 0;
    
}
