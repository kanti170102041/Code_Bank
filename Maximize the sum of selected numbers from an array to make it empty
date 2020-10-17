#include<bits/stdc++.h> 
using namespace std; 

int find(vector<int>&A){
    int n=A.size();
    unordered_map<int,int> m;
    m[0]=0;
    for(int i=0;i<n;i++)
        m[A[i]]++;
    int maxinA=*max_element(A.begin(),A.end());
    for(int i=2;i<=maxinA;i++){
        m[i]=max(m[i-1],m[i-2]+m[i]*i);
    }
    
    return m[maxinA];
    
}

int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
    
        cin>>A[i];
        
    }
    cout<<find(A)<<"\n";
    
 return 0;   
}
