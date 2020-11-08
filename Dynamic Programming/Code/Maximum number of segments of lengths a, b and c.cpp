#include<bits/stdc++.h> 
using namespace std; 

int segs(int n,int a,int b,int c,vector<int> &t){
    
    if(n==0)return 0;
    //if(n==a||n==b||n==c)return 1;
    if(t[n]!=-1)return t[n];
    int ans=INT_MIN;
    if(n>=a)
        ans=max(ans,segs(n-a,a,b,c,t)+1);
    if(n>=b)
        ans=max(ans,segs(n-b,a,b,c,t)+1);
    if(n>=c)
        ans=max(ans,segs(n-c,a,b,c,t)+1);
    return t[n]=ans;
}

int main(){
    //memset(t,-1,sizeof(t));
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> t(n+1,-1);
    cout<<segs(n,a,b,c,t)<<"\n";
    return 0;
}
